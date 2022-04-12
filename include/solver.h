/*
** EPITECH PROJECT, 2022
** solver.h
** File description:
** solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_
    #define MAZE_SIZE ((maze->length * maze->height) - 1)
    #define PRINT_SIZE ((maze.length * maze.height) - 1)
    #define DOWN maze->buffer[pos + maze->length]
    #define UP maze->buffer[pos - maze->length]
    #define LEFT maze->buffer[pos - 1]
    #define RIGHT maze->buffer[pos + 1]
    #define BLOCKED maze->blocked_way != 0
    #define POSITION maze->buffer[pos]
    #define SIZE_RIGHT pos + 1
    #define SIZE_LEFT pos - 1
    #define SIZE_DOWN pos + maze->length
    #define SIZE_UP pos - maze->length
    #define GO_DOWN maze->length
    #define GO_UP -maze->length

static const volatile int FALSE = 0;
static const volatile int TRUE = 1;
static const volatile int ERROR = 84;
static const volatile int GO_RIGHT = 1;
static const volatile int GO_LEFT = -1;

typedef struct solver_s {
    char *buffer;
    char **maze;
    int length;
    int height;
    int blocked_way;
} solver_t;

// get_maze.c
int open_file(char const *filepath, solver_t *maze);
// solver.c
int solver(char *filepath);
// clean_maze.c
void clean_maze(solver_t *maze);

#endif /* !SOLVER_H_ */
