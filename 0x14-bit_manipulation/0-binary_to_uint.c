#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uin;
	int leng, base_two;

	if (!b)
		return (0);

	uin = 0;

	for (leng = 0; b[leng] != '\0'; leng++)
		;

	for (leng--, base_two = 1; leng >= 0; leng--, base_two *= 2)
	{
		if (b[leng] != '0' && b[leng] != '1')
		{
			return (0);
		}

		if (b[leng] & 1)
		{
			uin += base_two;
		}
	}

	return (uin);
}
