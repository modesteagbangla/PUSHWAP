/*
** EPITECH PROJECT, 2020
** sorting
** File description:
** add_elem.c
*/

#include "../include/list.h"

list *fill_list(list *l, int ac, char **av)
{
    for (int i = 1; i < ac; i++)
        l = add_end(l, my_getnbr(av[i]));
    return (l);
}