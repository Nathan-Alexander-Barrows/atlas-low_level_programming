#include "main.h"

/**
 * _strncat - Concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest, using at most n bytes from src
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source to be appended to @dest
 * @n: The maximum number of bytes to be used from @src
 *
 * Return: A pointer to the destinantion string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while(*ptr != '\0')
	{
		ptr++;
	}

	while(n-- > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

