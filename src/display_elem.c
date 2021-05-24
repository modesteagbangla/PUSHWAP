/*
** EPITECH PROJECT, 2020
** sorting
** File description:
** display_elem.c
*/

#include "../include/list.h"

void disp_list(list *l)
{
    if (empty_list(l))
        my_putstr("Liste vide\n");
    else {
        cell *temp = l->begin;

        while (temp != NULL)
        {
            my_putstr("[ ");
            my_put_nbr(temp->value);
            my_putstr(" ]-->");
            if (l != NULL)
                temp = temp->next;
            else
                temp = NULL;
        }
        my_putstr("NULL\n");
    }
}