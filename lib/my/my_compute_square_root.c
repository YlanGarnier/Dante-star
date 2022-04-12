/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** write a function that returns the square root (if it is a whole number)
** of the number given as argument
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 1;
    for (int i = 0; i != nb; i++)
        if (i * i == nb)
            return i;
    return 0;
}
