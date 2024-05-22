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

    result = _isalpha(c);
    printf("%c is %s\n", c, result ? "an alphabetic character" : "not an alphabetic character");

    c = '1';
    result = _isalpha(c);
    printf("%c is %s\n", c, result ? "an alphabetic character" : "not an alphabetic character");

    return (0);
}
