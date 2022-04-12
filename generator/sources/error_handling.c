/*
** EPITECH PROJECT, 2022
** error_handling
** File description:
** returns 84 when error detected and 0 if not
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"
#include "my_macro.h"

int error_handling(int ac, char **av)
{
    char *getnbr_ret;
    int is_number;

    if (ac != 3 && ac != 4)
        return ERROR;
    if (ac == 4 && my_strcmp(av[3], "perfect") == 0)
        return ERROR;
    for (int i = 1; i < 3; ++i) {
        getnbr_ret = my_getstr(atoi(av[i]));
        is_number = strcmp(getnbr_ret, av[i]);
        free(getnbr_ret);
        if (is_number != 0)
            return ERROR;
    }
    if (atoi(av[1]) < 1 || atoi(av[2]) < 1)
        return ERROR;
    return 0;
}
