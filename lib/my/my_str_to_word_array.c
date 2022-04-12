/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** convert a string into array depending on space, \n or \t
*/

#include <stdlib.h>

void check_char(char *str, int *i, int *count, char c)
{
    if ((str[i[0]] == c || (str[i[0]] >= '\a' &&
str[i[0]] <= '\r')) && str[i[0] + 1] != c && !(str[i[0] + 1] >= '\a'
&& str[i[0] + 1] <= '\r') && str[i[0] + 1] != '\0' && (str[i[0] + 1] != '\\'
|| (str[i[0] + 2] != 'n' && str[i[0] + 2] != 't')))
        count[0]++;
    if (str[i[0]] == '\\' && (str[i[0] + 1] == 'n' ||
str[i[0] + 1] == 't') && str[i[0] + 2] != '\0' && str[i[0] + 2] != c &&
!(str[i[0] + 2] >= '\a' && str[i[0] + 2] <= '\r') && (str[i[0] + 2] != '\\' ||
(str[i[0] + 3] != 'n' && str[i[0] + 3] != 't')))
        count[0]++;
    return;
}

int count_words(char *str, char c)
{
    int count = 0;

    for (int i = 0, word = 0; str[i] != '\0'; i++) {
        if (word == 1)
            check_char(str, &i, &count, c);
        if (word == 0 && str[i] != c && !(str[i] >= '\a' &&
str[i] <= '\r') && (str[i] != '\\' || (str[i + 1] != 'n' &&
str[i + 1] != 't'))) {
            count++;
            word = 1;
        }
        if (str[i] == '\\' && (str[i + 1] == 'n' || str[i + 1] == 't'))
            i++;
    }
    return count;
}

char **malloc_array(char *str, int size)
{
    char **array = malloc(sizeof(char*) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = NULL;
    return array;
}

char *get_word(char *str, int *pos, char c)
{
    char *word;
    int size = 0;

    for (int i = pos[0]; str[i] != '\0' && str[i] != c && !(str[i] >= '\a' &&
str[i] <= '\r') && (str[i] != '\\' || (str[i + 1] != 'n' &&
str[i + 1] != 't')); i++)
        size++;
    word = malloc(sizeof(char) * (size + 1));
    word[size] = '\0';
    for (int j = 0; j < size; j++) {
        word[j] = str[pos[0]];
        pos[0]++;
    }
    return word;
}

char **my_str_to_word_array(char *str, char c)
{
    int size = count_words(str, c);
    char **array = malloc_array(str, size);

    for (int i = 0, j = 0; i < size && str[j] != '\0';) {
        if (str[j] == c || (str[j] >= '\a' && str[j] <= '\r'))
            j++;
        else if (str[j] == '\\' && (str[j + 1] == 'n' || str[j + 1] == 't'))
            j += 2;
        else {
            array[i] = get_word(str, &j, c);
            i++;
        }
    }
    return array;
}
