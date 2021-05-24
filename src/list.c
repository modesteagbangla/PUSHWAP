/*
** EPITECH PROJECT, 2021
** list
** File description:
** lis
*/

#include "../include/list.h"

list *new_list(void)
{
    list *res = malloc(sizeof(*res));

    res->begin = NULL;
    res->end = NULL;
    res->nb_elt = 0;
    return (res);
}

bool empty_list(list *l)
{
    if (l->begin == NULL || l == NULL)
        return (true);
    return (false);
}

int list_length(list *l)
{
    if (empty_list(l))
        return (0);
    return (l->nb_elt);
}

list *add_front(list *l, int elt)
{
    cell *new = malloc(sizeof(*new));

    new->next = NULL;
    new->prev = NULL;
    new->value = elt;
    if (l == NULL)
        l = new_list();
    if (empty_list(l)) {
        l->begin = new;
        l->end = new;
    } else {
        l->begin->prev = new;
        new->next = l->begin;
        l->begin = new;
    }
    l->nb_elt++;
    return (l);
}

list *add_end(list *l, int elt)
{
    cell *new = malloc(sizeof(*new));

    new->next = NULL;
    new->prev = NULL;
    new->value = elt;
    if (l == NULL)
        l = new_list();
    if (empty_list(l)) {
        l->begin = new;
        l->end = new;
    } else {
        l->end->next = new;
        new->prev = l->end;
        l->end = new;
    }
    l->nb_elt++;
    return (l);
}