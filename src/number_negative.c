/*
** EPITECH PROJECT, 2020
** sorting
** File description:
** number_negative.c
*/

#include "../include/list.h"

list *nomber_negative(list *l1)
{
    int len = list_length(l1);
    cell *temp = l1->begin;

    for (int i = 0; i < len && temp != NULL; i++) {
        if (temp->value <= 0) {
            l1 = add_front(l1, temp->value);
            l1 = del_end(l1);
            write(1, "ra ", 3);
        }
        if (l1 != NULL)
            temp = l1->end;
        else
            temp = NULL;
    }
    return (l1);
}