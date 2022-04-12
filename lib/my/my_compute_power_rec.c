/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** write a recursive function that returns the factorial of the number
** given as a parameter
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    return (nb * my_compute_power_rec(nb, p - 1));
}
