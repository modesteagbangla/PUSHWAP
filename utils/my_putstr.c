/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr
*/

#include "../include/list.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
