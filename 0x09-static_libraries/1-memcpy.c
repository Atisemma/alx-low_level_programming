#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: the pointer to the destination memory area
 * @src:Pointer to the source memory area
 * @n: number of bytes to be copiedd
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *dst_ptr = dest;
	char *src_ptr = src;

	for (i = 0; i < n; i++)
		*(dst_ptr + i) = *(src_ptr + i);

	return (dest);
}
