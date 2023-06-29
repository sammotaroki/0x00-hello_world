#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *c)
{
	int counter = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(c + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(c + counter) == alphabet[i])
			{
				*(c + counter) = rot13[i];
				break;
			}
		}
		counter++;
	}

	return (c);
}
