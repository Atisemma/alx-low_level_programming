#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog with copied name and owner
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: Pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nameLen, ownerLen;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameLen = strlen(name);
	ownerLen = strlen(owner);

	newDog->name = malloc((nameLen + 1) * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc((ownerLen + 1) * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strncpy(newDog->name, name, nameLen);

	strncpy(newDog->owner, owner, ownerLen);

	newDog->age = age;

	return (newDog);
}
