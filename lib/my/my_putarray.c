/*
** EPITECH PROJECT, 2022
** my_putarray
** File description:
** print an array
*/

#include <stdlib.h>

int my_putchar(char c);

int my_putstr(char *str);

int my_putarray(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
    return 0;
}
