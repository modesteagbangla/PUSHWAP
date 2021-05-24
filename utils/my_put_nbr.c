/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include "../include/list.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb);
    }
    else if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
