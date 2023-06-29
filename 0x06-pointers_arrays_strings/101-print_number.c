#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int c, j, counter;

	if (n < 0)
	{
		_putchar(45);
		j = n * -1;
	}
	else
	{
		j = n;
	}

	c = j;
	counter = 1;

	while (c > 9)
	{
		c /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((j / counter) % 10) + 48);
	}
}
