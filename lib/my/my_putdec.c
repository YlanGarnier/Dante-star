/*
** EPITECH PROJECT, 2021
** my_putdec.c
** File description:
** display unsigned int
*/

void my_putchar(char c);

unsigned int my_putdec(unsigned int nb)
{
    if (nb >= 10) {
        my_putdec(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10)
        my_putdec(nb + '0');
    return 0;
}
