/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** return a string's copy
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));

    return my_strcpy(dest, str);
}
