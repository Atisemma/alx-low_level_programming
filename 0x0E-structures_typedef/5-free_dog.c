#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees memory allocated or a dog
 * @d: pointer tothe dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
