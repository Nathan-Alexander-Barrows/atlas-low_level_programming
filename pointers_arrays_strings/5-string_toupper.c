#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr  - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
