/*
** EPITECH PROJECT, 2021
** my_getstr.c
** File description:
** convert int to str
*/

#include <stdlib.h>

int my_nbrlen(int nb);

char *my_revstr(char *str);

char *fill_str(char *str, int nb, int *pos)
{
    while (nb >= 10) {
        str[pos[0]] = nb % 10 + '0';
        pos[0]++;
        nb /= 10;
    }
    if (nb < 10) {
        str[pos[0]] = nb + '0';
        pos[0]++;
    }
    return str;
}

char *my_getstr(int nb)
{
    char *str = malloc(sizeof(char) * my_nbrlen(nb) + 1);
    int pos = 0;
    int neg = 0;

    if (nb < 0) {
        neg = 1;
        nb = -nb;
    }
    fill_str(str, nb, &pos);
    if (neg == 1) {
        str[pos] = '-';
        pos++;
    }
    str[pos] = '\0';
    return my_revstr(str);
}
