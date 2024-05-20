#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: generates a random number and determines
 * the last digit and its properties.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of $d is %d and is ", n, last_digit");
	if(last_digit > 5)
	{
		printf("Greater than 5 \n");
	}
	elseif(last_digit == 0)
	{
		printf("0\n")
	}
	else 
	{
		printf("Less than 6 and not 0\n");
	}

	return (0);
}
