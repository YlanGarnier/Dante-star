/*
** EPITECH PROJECT, 2021
** my_putnbr.c
** File description:
** display a number
*/

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10)
        my_putchar(nb + '0');
    return 0;
}
