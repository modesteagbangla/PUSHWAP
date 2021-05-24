/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "../include/list.h"

int my_getnbr(char const *str)
{
    int m, b = 1, v = 0;

    for (m = 0; str[m] == '-' || str[m] == '+'; m++) {
        if (str[m] == '-')
            b = b * -1;
    }
    for (; str[m] >= '0' && str[m] <= '9'; m++) {
        v = v * 10 + str[m] - 48;
        if (v < 0)
            if (v != -2147483648 || v != 2147483647)
                return (0);
    }
    return (v * b);
}
