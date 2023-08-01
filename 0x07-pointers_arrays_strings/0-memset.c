#include "main.h"
/**
 * _memset - Fills the memory with a constant byte
 * @s: pointer to the memory area to be fiiled
 * @b: constant byte to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = b;
	}

	return (s);
}
