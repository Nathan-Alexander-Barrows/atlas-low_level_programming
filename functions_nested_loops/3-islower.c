#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';
    int result;

    result = _islower(c);
    printf("%c is %s\n", c, result ? "lowercase" : "not lowercase");

    c = 'A';
    result = _islower(c);
    printf("%c is %s\n", c, result ? "lowercase" : "not lowercase");

    return (0);
}
