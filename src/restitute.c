/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** restitute.c
*/

#include "../include/list.h"

void restitute(list *l1, list *l2)
{
    cell *temp = l2->begin;

    while (temp != NULL) {
        l1 = add_front(l1, temp->value);
        l2 = del_front(l2);
        write(1, "pa ", 3);
        if (l2 != NULL)
            temp = l2->begin;
        else
            temp = NULL;
    }
}