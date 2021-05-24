/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** my_strlen
*/

#include "../include/list.h"

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
