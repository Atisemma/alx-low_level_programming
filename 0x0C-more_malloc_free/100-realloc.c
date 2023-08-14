#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - rellocates a memory block using malloc and free
 * @ptr: pointer to the mempry previously allocated
 * @old_size: size,in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	memcpy(new_pointer, ptr, old_size);

	free(ptr);
	return (new_pointer);
}
