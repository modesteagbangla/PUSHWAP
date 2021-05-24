/*
** EPITECH PROJECT, 2021
** list
** File description:
** del
*/

#include "../include/list.h"

list *del_front(list *l)
{
    cell *temp;

    if (empty_list(l))
        return (NULL);
    else if (l->nb_elt == 1)
    {
        free(l->begin);
        l->begin = NULL;
        l->end = NULL;
    } else {
        temp = l->begin;
        l->begin = l->begin->next;
        l->begin->prev = NULL;
        temp->next = NULL;
        temp->prev = NULL;
        free(temp);
    }
    l->nb_elt--;
    return (l);
}

list *del_end(list *l)
{
    cell *temp;

    if (empty_list(l))
        return (NULL);
    else if (l->nb_elt == 1)
    {
        free(l->end);
        l->begin = NULL;
        l->end = NULL;
    } else {
        temp = l->end;
        l->end = l->end->prev;
        l->end->next = NULL;
        temp->next = NULL;
        temp->prev = NULL;
        free(temp);
    }
    l->nb_elt--;
    return (l);
}

void free_list(list *l)
{
    cell *temp = l->begin;

    while (temp != NULL)
    {
        l = del_front(l);
        if (empty_list(l))
            temp = NULL;
    }
}
