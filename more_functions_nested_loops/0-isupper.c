#include "main.h"

/**
 * Function definition
 * 
 * Check if character is within the ASCII range of uppercase letters
 */
int _isupper(int c) 
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
