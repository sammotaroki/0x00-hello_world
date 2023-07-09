#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @m: memory area.
 * @c: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(m + i) =  c;

	return (m);
}
