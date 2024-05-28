#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j > i; j--)
        {
            _putchar(' ');
        }
        for (int k = 1; k <= i; k++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
