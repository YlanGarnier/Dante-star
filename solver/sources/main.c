/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "solver.h"

int main(int ac, char **av)
{
    if (solver(av[1]) == TRUE)
        return ERROR;
    return FALSE;
}
