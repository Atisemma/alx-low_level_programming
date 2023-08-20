#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownaer of the dog
 *
 * Description: this function initializes the members of,
 * struct dog with the provided arguments
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
