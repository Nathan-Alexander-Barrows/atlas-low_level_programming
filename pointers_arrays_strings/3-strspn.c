#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the bytes to be accepted
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int match;

    for (i = 0; s[i] != '\0'; i++)
    {
	    match = 0;
	    for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
		    match = 1;
		    count++;
		break;
	    }
	}
	if (!match)
	{
		return (count);
	}
    }
    return (count);
}
