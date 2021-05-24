/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/list.h"

int main(int ac, char **av)
{
    clock_t begin = clock();

    if (ac > 1) {
        list *l = new_list();
        list *l1 = new_list();
        l = fill_list(l, ac, av);
        if (!check_sorting(l)) {
            l = my_algorithme(l, l1);
            l = nomber_negative(l);
            my_putstr("sa ");
            my_putstr("sa\n");
        } else {
            my_putstr("\n");
            return (0);
        }
        return (0);
    } else
        return (84);
}
