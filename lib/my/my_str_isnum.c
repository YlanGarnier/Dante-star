/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** return 1 if string is a number and 0 if not
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    return 1;
}
