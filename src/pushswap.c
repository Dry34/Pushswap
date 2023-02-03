/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap
*/

#include "../includes/my.h"

list_t first(list_t list)
{
    int nb = small_nb(list);
    while (list.list_a[0] != nb) {
        list = move_ra(list);
    }
    return list;
}

int small_nb(list_t list)
{
    int nb = list.list_a[0];
    int i = 0;
    while (i != list.size_a) {
        if (list.list_a[i] < nb) {
            nb = list.list_a[i];
        }
        i++;
    }
    return nb;
}

list_t pushswap(list_t list)
{
    int size = list.size_a;
    int i = 0;

    while (i != size) {
        list = first(list);
        list = move_pb(list);
        i++;
    }
    i = 0;
    while (i != size - 1) {
        list = move_pa(list);
        i++;
    }
    list = move_space(list);
    return list;
}
