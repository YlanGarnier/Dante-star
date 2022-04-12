/*
** EPITECH PROJECT, 2022
** binary tree maze generator
** File description:
** generate maze using binary tree method
*/

#include <stdio.h>
#include <stdlib.h>

void north_case(char **map, int cur_y, int cur_x)
{
    map[cur_y][cur_x] = '*';
    map[cur_y - 1][cur_x] = '*';
    if (cur_x > 0) {
        map[cur_y][cur_x - 1] = 'X';
        map[cur_y - 1][cur_x - 1] = 'X';
    }
}

void west_case(char **map, int cur_y, int cur_x)
{
    map[cur_y][cur_x] = '*';
    if (cur_y > 0)
        map[cur_y - 1][cur_x] = 'X';
    if (cur_x > 0)
        map[cur_y][cur_x - 1] = '*';
    if (cur_y > 0 && cur_x > 0)
        map[cur_y - 1][cur_x - 1] = 'X';
}

void check_even_width(char **map, int cur_y, int cur_x, int x)
{
    if (cur_x == x) {
        map[cur_y][cur_x - 1] = 'X';
        if (cur_y > 0)
            map[cur_y - 1][cur_x - 1] = 'X';
    }
}

void perfect_binary_tree_maze(char **map, int cur_y, int y, int x)
{
    int type;
    int cur_x = 0;

    for (; cur_x < x; cur_x += 2) {
        type = rand() % 2;
        if (cur_y > 0 && (cur_x == 0 || type == 0))
            north_case(map, cur_y, cur_x);
        else
            west_case(map, cur_y, cur_x);
    }
    check_even_width(map, cur_y, cur_x, x);
    if (cur_x == x && cur_y + 1 == y)
        map[cur_y][cur_x - 1] = '*';
    if (cur_y > 0)
        printf("%s\n", map[cur_y - 1]);
    if (cur_y + 1 == y)
        printf("%s", map[cur_y]);
    else
        printf("%s\n", map[cur_y]);
}
