/*
** EPITECH PROJECT, 2021
** check_sorting.c
** File description:
** check_sorting
*/

#include "../include/list.h"

void *process_radix(cell *temp, list *l1, list *l2, int b)
{
    if (((temp->value >> b) & 1) == 0) {
        l2 = add_front(l2, temp->value);
        l1 = del_front(l1);
        write(1, "pb ", 3);
    }
    else {
        l1 = add_end(l1, temp->value);
        l1 = del_front(l1);
        write(1, "ra ", 3);
    }
}
