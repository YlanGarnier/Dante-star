/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Write your my.h header file that contains the prototypes of
** all the functions exposed by your libmy.a
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_putnbr(int nb);
unsigned int my_putdec(unsigned int nb);
void my_swap(int *a, int *b);
void my_putstr(char *str);
int my_nbrlen(int nb);
int my_strlen(char const *str);
char *my_getstr(int nb);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *str);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *str1, char const *str2);
int my_strncmp(char const *str1, char const *str2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void my_printf(char *str, ...);
char **my_str_to_word_array(char *str, char c);
int my_arraylen(char **array);
int my_putarray(char **array);
void my_free_array(char **array);
int my_str_isprintable(char *str);

#endif
