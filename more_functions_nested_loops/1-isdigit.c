#include "main.h"

/**
 * Function Definition
 *
 * Check if the character is within the ASCII range of digits
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
    {
	    return (1);
    }
    else
    {
	    return (0);
    }
}
