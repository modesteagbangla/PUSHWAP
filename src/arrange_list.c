/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** arrange_list.c
*/

#include "../include/list.h"

bool check_sorting (list *l)
{
    cell *temp = l->begin;

    while (temp != NULL && temp->next != NULL) {
        if (temp->value > temp->next->value)
            return (false);
        if (l != NULL)
            temp = temp->next;
        else
            temp =  NULL;
    }
    return (true);
}