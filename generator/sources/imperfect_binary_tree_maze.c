/*
** EPITECH PROJECT, 2022
** binary tree maze generator
** File description:
** generate maze using binary tree method
*/

#include <stdio.h>
#include <stdlib.h>

void imperfect_north_case(char **map, int cur_y, int cur_x)
{
    int type = rand() % 3;

    map[cur_y][cur_x] = '*';
    map[cur_y - 1][cur_x] = '*';
    if (cur_x > 0) {
        map[cur_y][cur_x - 1] = 'X';
        map[cur_y - 1][cur_x - 1] = 'X';
    }
    if (cur_x > 0 && type == 1) {
        if (map[cur_y][cur_x - 1] == 'X')
            map[cur_y][cur_x - 1] = '*';
    }
    if (cur_x > 0 && type == 2)
        if (map[cur_y - 1][cur_x - 1] == 'X')
            map[cur_y - 1][cur_x - 1] = '*';
}

void imperfect_west_case(char **map, int cur_y, int cur_x)
{
    int type = rand() % 3;

    map[cur_y][cur_x] = '*';
    if (cur_y > 0)
        map[cur_y - 1][cur_x] = 'X';
    if (cur_x > 0)
        map[cur_y][cur_x - 1] = '*';
    if (cur_y > 0 && cur_x > 0)
        map[cur_y - 1][cur_x - 1] = 'X';
    if (cur_y > 0 && type == 1) {
        if (map[cur_y - 1][cur_x] == 'X')
            map[cur_y - 1][cur_x] = '*';
    }
    if (cur_y > 0 && cur_x > 0 && type == 2)
        if (map[cur_y - 1][cur_x - 1] == '*')
            map[cur_y - 1][cur_x - 1] = ' ';
}

void check_imperfect_even_width(char **map, int cur_y, int cur_x, int x)
{
    if (cur_x == x) {
        map[cur_y][cur_x - 1] = 'X';
        if (cur_y > 0)
            map[cur_y - 1][cur_x - 1] = 'X';
    }
}

void carve_second_way(char **map, int cur_y, int y, int x)
{
    if (cur_y + 1 == y) {
        if (y > 1 && x > 1 && map[y - 2][x - 2] == 'X')
            map[y - 2][x - 2] = '*';
        if (x > 2 && map[y - 1][x - 3] == 'X')
            map[y - 1][x - 3] = '*';
    }
    if (y > 1 && x > 1 && cur_y + 2 == y) {
        if (y > 2 && map[y - 3][x - 2] == 'X')
            map[y - 3][x - 2] = '*';
        if (x > 2 && map[y - 2][x - 3] == 'X')
            map[y - 2][x - 3] = '*';
    }
}

void imperfect_binary_tree_maze(char **map, int cur_y, int y, int x)
{
    int type;
    int cur_x = 0;

    for (; cur_x < x; cur_x += 2) {
        type = rand() % 2;
        if (cur_y > 0 && (cur_x == 0 || type == 0))
            imperfect_north_case(map, cur_y, cur_x);
        else
            imperfect_west_case(map, cur_y, cur_x);
    }
    check_imperfect_even_width(map, cur_y, cur_x, x);
    carve_second_way(map, cur_y, y, x);
    if (cur_x == x && cur_y + 1 == y)
        map[cur_y][cur_x - 1] = '*';
    if (cur_y > 0)
        printf("%s\n", map[cur_y - 1]);
    if (cur_y + 1 == y)
        printf("%s", map[cur_y]);
    else
        printf("%s\n", map[cur_y]);
}
