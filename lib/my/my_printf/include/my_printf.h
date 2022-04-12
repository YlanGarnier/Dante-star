/*
** EPITECH PROJECT, 2021
** my_printf.h
** File description:
** include guard
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char const *str);
int my_putnbr(int nb);
int my_strlen(char const *str);
char *my_revstr(char *str);
unsigned int my_putdec(unsigned int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
void disp_bin(int nb);
void disp_oct(int nb);
void disp_hex(int nb, char mod);
void disp_plus_format(int nb, int *i);
void my_printf(char *str, ...);
#endif
