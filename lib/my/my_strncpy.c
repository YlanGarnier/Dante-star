/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** write a function that copies n characters from a string into another
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src);

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    if (n > my_strlen(src)) {
        my_strcpy(dest, src);
        return dest;
    }
    for (int i = 0; i != n; i += 1)
        dest[i] = src[i];
    return dest;
}
