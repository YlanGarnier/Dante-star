/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** return 0 if string isnt printable and 1 if it is
*/

int my_str_isprintable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= ' ' && str[i] <= '~'))
            return 0;
    return 1;
}
