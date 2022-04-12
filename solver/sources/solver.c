/*
** EPITECH PROJECT, 2021
** brr
** File description:
** brr
*/

#include <stdio.h>
#include <unistd.h>
#include "solver.h"

void is_right_way(solver_t *maze, int pos)
{
    if (POSITION == '*')
        POSITION = 'o';
    else
        POSITION = 'W';
    return;
}

int find_way(solver_t *maze, int pos)
{
    if (SIZE_RIGHT <= MAZE_SIZE && RIGHT == '*')
        return GO_RIGHT;
    if (SIZE_DOWN <= MAZE_SIZE && DOWN == '*')
        return GO_DOWN;
    if (SIZE_UP >= 0 && UP == '*')
        return GO_UP;
    if (SIZE_LEFT >= 0 && LEFT == '*')
        return GO_LEFT;
    if (SIZE_RIGHT <= MAZE_SIZE && RIGHT == 'o' && BLOCKED)
        return GO_RIGHT;
    if (SIZE_DOWN <= MAZE_SIZE && DOWN == 'o' && BLOCKED)
        return GO_DOWN;
    if (SIZE_UP >= 0 && UP == 'o' && BLOCKED)
        return GO_UP;
    if (SIZE_LEFT >= 0 && LEFT == 'o' && BLOCKED)
        return GO_LEFT;
    return FALSE;
}

int initialize(solver_t *maze)
{
    maze->length = 1;
    maze->height = 1;
    maze->blocked_way = 0;

    for (int i = 0; maze->buffer[i] != '\0'; i++) {
        if (maze->buffer[i] == '\n')
            maze->height++;
        if (maze->height < 2)
            maze->length++;
    }
    if (maze->length < 1 || maze->height < 1)
        return TRUE;
    return FALSE;
}

int algrorithm(solver_t *maze)
{
    int pos = 0;
    int prev_pos = 0;

    for (; pos < MAZE_SIZE - 1; pos += find_way(maze, pos)) {
        if (pos == prev_pos)
            maze->blocked_way++;
        else if (BLOCKED && POSITION == '*') {
            maze->blocked_way = 0;
            maze->buffer[prev_pos] = 'o';
        }
        prev_pos = pos;
        is_right_way(maze, pos);
        if (maze->blocked_way > 2)
            return TRUE;
    }
    POSITION = 'o';
    return FALSE;
}

int solver(char *filepath)
{
    solver_t maze;

    if ((open_file(filepath, &maze)) == -1)
        return TRUE;
    if (initialize(&maze) == TRUE)
        return TRUE;
    if (algrorithm(&maze) == TRUE)
        write(1, "no solution found", 17);
    else {
        clean_maze(&maze);
        write(1, maze.buffer, PRINT_SIZE);
    }
    return 0;
}
