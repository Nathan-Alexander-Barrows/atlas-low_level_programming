#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: A pointer to the first element of the array to be reversed
 * @n: The number of elements in the array
 *
 * Dscription: This function takes an array of intengers and its length
 * and reverses the order of the elements in the array
 * It swaps elements from the start and end of the array, moving towards
 * the center, until the netire array is reversed
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
