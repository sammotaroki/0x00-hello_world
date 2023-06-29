#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @c: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *c)
{
	int counter = 0;

	while (*(c + counter) != '\0')
	{
		if ((*(c + counter) >= 97) && (*(c + counter) <= 122))
			*(c + counter) = *(c + counter) - 32;
		counter++;
	}

	return (c);
}
