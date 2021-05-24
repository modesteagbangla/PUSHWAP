/*
** EPITECH PROJECT, 2020
** sorting
** File description:
** my_algo.c
*/

#include "../include/list.h"

list *my_algorithme(list *l1, list *l2)
{
    int b = 0;
    int len = list_length(l1);
    cell *temp = l1->begin;

    while (b < 32 && !check_sorting(l1)) {
        for (int i = 0; i < len; i++) {
            temp = l1->begin;
            process_radix(temp, l1, l2, b);
        }
        restitute(l1, l2);
        b++;
    }
    return (l1);
}
