/*
** EPITECH PROJECT, 2023
** move
** File description:
** pushswap
*/

#include "../includes/my.h"

list_t move_pa (list_t list)
{
    int i = 0;

    if (list.size_b > 0) {
        i = list.size_a;
        while (i > 0) {
            list.list_a[i] = list.list_a[i - 1];
            i--;
        }
        list.size_a = list.size_a + 1;
        list.list_a[0] = list.list_b[0];
        i = 0;
        while (i < list.size_b - 1) {
            list.list_b[i] = list.list_b[i + 1];
            i++;
        }
        list.list_b[list.size_b - 1] = 0;
        list.size_b = list.size_b - 1;
    }
    my_putstr("pa ");
    return (list);
}

list_t move_space(list_t list)
{
    int i = 0;

    if (list.size_b > 0) {
        i = list.size_a;
        while (i > 0) {
            list.list_a[i] = list.list_a[i - 1];
            i--;
        }
        list.size_a = list.size_a + 1;
        list.list_a[0] = list.list_b[0];
        i = 0;
        while (i < list.size_b - 1) {
            list.list_b[i] = list.list_b[i + 1];
            i++;
        }
        list.list_b[list.size_b - 1] = 0;
        list.size_b = list.size_b - 1;
    }
    my_putstr("pa");
    return (list);
}

list_t move_pb (list_t list)
{
    int i = 0;
    if (list.size_a > 0) {
        i = list.size_b;
        while (i > 0) {
            list.list_b[i] = list.list_b[i - 1];
            i--;
        }
        list.size_b = list.size_b + 1;
        list.list_b[0] = list.list_a[0];
        i = 0;
        while (i < list.size_a - 1) {
            list.list_a[i] = list.list_a[i + 1];
            i++;
        }
        list.list_a[list.size_a - 1] = 0;
        list.size_a = list.size_a - 1;
    }
    my_putstr("pb ");
    return (list);
}

list_t move_ra (list_t list)
{
    int tmp = 0;
    int i = 0;
    tmp = list.list_a[0];
    while (i < list.size_a - 1) {
        list.list_a[i] = list.list_a[i + 1];
        i++;
    }
    list.list_a[i] = tmp;
    my_putstr("ra ");
    return list;
}
