/*
** EPITECH PROJECT, 2021
** generator
** File description:
** maze generator main file
*/

#include  <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "generator.h"
#include "my_macro.h"

maze_t set_maze_info(int ac, char **av)
{
    maze_t maze;

    maze.y = atoi(av[2]);
    maze.x = atoi(av[1]);
    if (ac == 3)
        maze.mode = IMPERFECT;
    else
        maze.mode = PERFECT;
    return maze;
}

int generator(int ac, char **av)
{
    maze_t maze = set_maze_info(ac, av);

    srand(time(NULL));
    if (maze.mode == PERFECT)
        perfect_maze_generator(maze.y, maze.x);
    else
        imperfect_maze_generator(maze.y, maze.x);
    return 0;
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == ERROR)
        return ERROR;
    return generator(ac, av);
}
