/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** main
*/

#include "../includes/my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    list_t list = init_list(list, ac, av);
    if (ac == 1) {
        return 0;
    } else if (list_sort(list) != -1) {
        my_putchar('\n');
    } else {
        list = pushswap(list);
        my_putchar('\n');
    }
    for (int i = 0; i != list.size_a; i++) {
        printf("%d ", list.list_a[i]);
    }
    printf("\n");
    return 0;
}
