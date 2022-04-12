/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** compare two strings
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 != len_s2)
        return 0;
    while (i != len_s1) {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
