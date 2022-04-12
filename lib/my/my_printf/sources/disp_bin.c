/*
** EPITECH PROJECT, 2021
** disp_bin
** File description:
** returns binary of a decimal nbr
*/

#include "../include/my_printf.h"
#include <stdlib.h>

void disp_bin(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int p = 0;

    for (; nb != 0; p++) {
        if (nb % 2 == 0)
            res[p] = '0';
        else if (nb % 2 == 1)
            res[p] = '1';
        nb /= 2;
    }
    res[p + 1] = '\0';
    my_putstr(my_revstr(res));
}
