/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** write a function that returns 1 if the number is prime and 0 if not
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 2; i != nb; i++)
        if (nb % i == 0)
            return 0;
    return 1;
}
