/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** .h containing all functions needed by maze generator
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

static const volatile int PERFECT = 0;
static const volatile int IMPERFECT = 1;
static const volatile int PEER = 0;
static const volatile int ALONE = 1;

typedef struct maze_s {
    int y;
    int x;
    int mode;
    char **map;
} maze_t;

void imperfect_binary_tree_maze(char **map, int cur_y, int y, int x);
void imperfect_maze_generator(int y, int x);
void perfect_binary_tree_maze(char **map, int cur_y, int y, int x);
void perfect_maze_generator(int y, int x);
int error_handling(int ac, char **av);

#endif
