#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
