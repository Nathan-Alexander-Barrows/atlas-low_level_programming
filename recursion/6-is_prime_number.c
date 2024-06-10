#include "main.h"

/**
 * is_prime_helper - helps to determine if a number is prime
 * @n: the number to be checked
 * @i: the current divisor
 *
 * is_prime_number - checks if a number is prime
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
