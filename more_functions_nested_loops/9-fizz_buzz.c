#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, but for multiples of three
 * prints Fizz instead of the number and for the multiples of five
 * prints Buzz. For numbers which are multiples of both three and
 * five prints FizzBuzz. Each number or word is separated by a space
 */
void fizz_buzz(void)
{	
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
