#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *c)
{
	int counter = 0, i;
	int alt_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(c + counter) >= 97 && *(c + counter) <= 122)
		*(c + counter) = *(c + counter) - 32;
	counter++;
	while (*(c + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(c + counter) == alt_words[i])
			{
				if ((*(c + (counter + 1)) >= 97) && (*(c + (counter + 1)) <= 122))
					*(c + (counter + 1)) = *(c + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (c);
}
