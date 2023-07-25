#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the string length
 * @s: A pointer to character
 * Return: The length of @str
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
