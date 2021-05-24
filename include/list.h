/*
** EPITECH PROJECT, 2021
** list
** File description:
** lib
*/

#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

typedef struct list
{
    struct cell *begin;
    struct cell *end;
    int nb_elt;
} list;

typedef struct cell
{
    int value;
    struct cell *next;
    struct cell *prev;
} cell;

list *new_list(void);
bool empty_list(list *l);
int list_length(list *l);
list *add_front(list *l, int elt);
list *add_end(list *l, int elt);
list *del_front(list *l);
list *del_end(list *l);
int my_put_nbr(int nb);
void my_putstr(char *str);
int my_getnbr(char const *str);
void disp_list(list *l);
list *fill_list(list *l, int ac, char **av);
int my_strlen(char *str);
void free_list(list *l);
list *fill_list(list *l, int ac, char **av);
bool check_sorting(list *l);
void restitute(list *l1, list *l2);
list *my_algorithme(list *l1, list *l2);
void *process_radix(cell *temp, list *l1, list *l2, int b);
list *nomber_negative(list *l1);

#endif /* LIST_H_ */
