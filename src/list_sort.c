/*
** EPITECH PROJECT, 2023
** list_sort
** File description:
** pushswap
*/

#include "../includes/my.h"

int list_sort(list_t list)
{
    int i = 1;
    while (i != list.size_a) {
        if (list.list_a[i] < list.list_a[i - 1]) {
            return (-1);
        }
        i++;
    }
    return 0;
}
