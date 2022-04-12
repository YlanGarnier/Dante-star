/*
** EPITECH PROJECT, 2022
** my_free_array
** File description:
** freeing an array
*/

#include <stdlib.h>

int my_arraylen(char **array);

void my_free_array(char **array)
{
    int arraylen = my_arraylen(array);

    for (int i = 0; i < arraylen; i++)
        free(array[i]);
    free(array);
    return;
}
