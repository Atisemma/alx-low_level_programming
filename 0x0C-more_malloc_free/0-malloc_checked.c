#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to allocate
 * Return: a pointer to the allocated memory
 * If malloc fails, the function terminates with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
