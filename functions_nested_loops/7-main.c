#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    printf("%d\n", r);
    r = print_last_digit(0);
    printf("%d\n", r);
    r = print_last_digit(-1024);
    printf("%d\n", r);

    return (0);
}
