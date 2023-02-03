/*
** EPITECH PROJECT, 2023
** asset
** File description:
** pushswap
*/

#include "../includes/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg = neg * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return (nb * neg);
}
