/*
** EPITECH PROJECT, 2022
** clean_maze.c
** File description:
** clean the maze
*/

#include "solver.h"

void clean_maze(solver_t *maze)
{
    for (int i = 0; maze->buffer[i] != '\0'; i++)
        if (maze->buffer[i] == 'W')
            maze->buffer[i] = '*';
    return;
}
