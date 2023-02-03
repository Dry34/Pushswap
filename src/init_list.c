/*
** EPITECH PROJECT, 2023
** init_list
** File description:
** pushswap
*/

#include "../includes/my.h"

int *init_list_a(int ac, char **av)
{
    int *list_a = malloc(sizeof(int) *ac - 1);
    int j = 1;
    int i = 0;
    while (i != ac - 1) {
        list_a[i] = my_getnbr(av[j]);
        j++;
        i++;
    }
    return list_a;
}

int *init_list_b(int ac)
{
    int *list_b = malloc(sizeof(int) *ac - 1);
    return list_b;
}

list_t init_list(list_t list, int ac, char **av)
{
    list.size_a = ac - 1;
    list.size_b = 0;
    list.list_a = init_list_a(ac, av);
    list.list_b = init_list_b(ac);
    return list;
}
