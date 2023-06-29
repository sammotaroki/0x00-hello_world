#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: input string.
 * Return: the pointer to dest.
 */

char *leet(char *c)
{
	int counter = 0, i;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(c + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(c + counter) == lower_letters[i] || *(c + counter) == upper_letters[i])
			{
				*(c + counter) = numbers[i];
				break;
			}
		}
		counter++;
	}

	return (c);
}
