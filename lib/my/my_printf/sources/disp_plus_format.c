/*
** EPITECH PROJECT, 2021
** disp_positive_int
** File description:
** returns int with + in front of
*/

#include "../include/my_printf.h"

void disp_plus_format(int nb, int *i)
{
    if (nb >= 0) {
        my_putchar('+');
        my_putnbr(nb);
    } else
        my_putnbr(nb);
    i[0]++;
}
