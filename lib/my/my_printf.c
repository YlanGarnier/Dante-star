/*
** EPITECH PROJECT, 2021
** bsprintf project
** File description:
** display
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf/include/my_printf.h"

int is_flag(char *str, int p)
{
    char *flags = "dicsSuboxX%";

    for (int i = 0; flags[i] != '\0'; i++) {
        if (str[p] == '0' && (str[p + 1] == 'd' || str[p + 1] == 'i'))
            return 1;
        if (str[p] == '+' && (str[p + 1] == 'd' || str[p + 1] == 'i'))
            return 1;
        if (str[p] == flags[i])
            return 1;
    }
    my_putchar(str[p - 1]);
    my_putchar(str[p]);
    return 0;
}

void disp_flag2(char **str, va_list list, int *i)
{
    if (str[0][i[0]] == 'o')
        disp_oct(va_arg(list, int));
    if (str[0][i[0]] == '0' && (str[0][i[0] + 1] == 'd'
                                || str[0][i[0] + 1] == 'i')) {
        my_putnbr(va_arg(list, int));
        i[0]++;
    }
    if (str[0][i[0]] == '+' && (str[0][i[0] + 1] == 'd'
                                || str[0][i[0] + 1] == 'i'))
        disp_plus_format(va_arg(list, int), i);
}

int disp_flag(char **str, va_list list, int i)
{
    int flag = is_flag(*str, i);

    if (str[0][i] == 'd' || str[0][i] == 'i')
        my_putnbr(va_arg(list, int));
    if (str[0][i] == 'u')
        my_putdec(va_arg(list, unsigned int));
    if (str[0][i] == 'c')
        my_putchar(va_arg(list, int));
    if (str[0][i] == 's')
        my_putstr(va_arg(list, char*));
    if (str[0][i] == 'b')
        disp_bin(va_arg(list, int));
    if (str[0][i] == 'x' || str[0][i] == 'X')
        disp_hex(va_arg(list, int), str[0][i]);
    if (str[0][i] == '%')
        my_putchar('%');
    disp_flag2(str, list, &i);
    return i;
}

void my_printf(char *str, ...)
{
    va_list list;
    char *str2 = my_strdup(str);

    va_start(list, str);
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '%')
            i = disp_flag(&str2, list, i + 1);
        else
            my_putchar(str2[i]);
    }
    free(str2);
    va_end(list);
    return;
}
