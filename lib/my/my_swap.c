/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swaps the content of two integers, whose addresses are given as a parameter
*/

#include <unistd.h>
#include <sys/syscall.h>

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
