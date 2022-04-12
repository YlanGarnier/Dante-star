/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** write a function that returns the smallest prime number that is
** greater than, or equal to, the number given as a parameter
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 2; i != nb; i++)
        if (nb % i == 0)
            return 0;
    return 1;
}

int my_find_prime_sup(int nb)
{
    int np = nb;

    if (is_prime(nb) == 1)
        return nb;
    if (nb <= 1)
        return 2;
    while (is_prime(np) == 0)
        np++;
    return np;
}
