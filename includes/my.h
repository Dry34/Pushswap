/*
** EPITECH PROJECT, 2023
** MY_H_
** File description:
** MY_H_
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdlib.h>

    typedef struct list_s {
        int *list_a;
        int *list_b;
        int size_a;
        int size_b;
    } list_t;

    int main(int ac, char **av);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int my_getnbr(char const *str);
    int *init_list_a(int ac, char **av);
    int *init_list_b(int ac);
    list_t init_list(list_t list, int ac, char **av);
    int list_sort(list_t list);
    list_t move_pa(list_t list);
    list_t move_space(list_t list);
    list_t move_pb(list_t list);
    list_t move_ra(list_t list);
    int small_nb(list_t list);
    list_t first(list_t list);
    list_t pushswap(list_t list);
#endif /* !MY_H_ */
