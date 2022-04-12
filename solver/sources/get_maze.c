/*
** EPITECH PROJECT, 2022
** get_maze.c
** File description:
** get the maze to solve
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "solver.h"
#include "my.h"

int stats_of_file(char const *filepath)
{
    struct stat sb;

    if (stat(filepath, &sb) == -1) {
        write(2, "error : can't read stats\n", 25);
        exit (84);
    }
    return sb.st_size;
}

int open_file(char const *filepath, solver_t *maze)
{
    int fd = 0;
    int size = stats_of_file(filepath) + 1;
    maze->buffer = malloc(sizeof(char) * (size + 1));

    if ((fd = open(filepath, O_RDONLY)) == -1)
        return 1;
    if (read(fd, maze->buffer, size) == -1)
        return 1;
    maze->buffer[size - 1] = '\0';
    close(fd);
    return 0;
}
