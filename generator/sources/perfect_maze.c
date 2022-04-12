/*
** EPITECH PROJECT, 2022
** perfect maze
** File description:
** generate perfect maze
*/

#include <stdio.h>
#include <stdlib.h>
#include "generator.h"

void malloc_lines(char **map, int cur_y, int x, int line_state)
{
    map[cur_y] = malloc(sizeof(char) * (x + 1));
    map[cur_y][x] = '\0';
    if (cur_y > 0 && line_state == PEER) {
        map[cur_y - 1] = malloc(sizeof(char) * (x + 1));
        map[cur_y - 1][x] = '\0';
    }
}

void even_height_case(char **map, int cur_y, int x)
{
    malloc_lines(map, cur_y - 1, x, ALONE);
    for (int i = 0; i < x - 1; ++i)
        map[cur_y - 1][i] = 'X';
    map[cur_y - 1][x - 1] = '*';
    if (x % 2 == 0)
        map[cur_y - 1][x - 2] = '*';
    printf("%s", map[cur_y - 1]);
    free(map[cur_y - 1]);

}

void perfect_maze_generator(int y, int x)
{
    char **map = malloc(sizeof(char*) * y);
    int cur_y = 0;

    for (; cur_y < y; cur_y += 2) {
        malloc_lines(map, cur_y, x, PEER);
        perfect_binary_tree_maze(map, cur_y, y, x);
        if (cur_y > 0)
            free(map[cur_y - 1]);
        free(map[cur_y]);
    }
    if (cur_y == y)
        even_height_case(map, cur_y, x);
    free(map);
}
