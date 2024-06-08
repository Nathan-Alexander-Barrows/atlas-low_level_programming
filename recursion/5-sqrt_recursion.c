#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if none found
 */
int _sqrt_recursion(int n)
{
	int start = 0;
	
	if (n < 0)
		return (-1);
	
	while (start * start <= n)
	{
	if (start * start == n)
		return (start);
	start++;
	}
	
	return (-1);
}
