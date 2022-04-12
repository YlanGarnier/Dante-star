/*
** EPITECH PROJECT, 2021
** my_nbrlen
** File description:
** count how much digits in nbr
*/

int my_nbrlen(int nb)
{
    int len = 1;

    if (nb < 0)
        len++;
    for (;nb / 10 != 0; len++)
        nb /= 10;
    return len;
}
