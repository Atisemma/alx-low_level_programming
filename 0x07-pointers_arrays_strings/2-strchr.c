#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointr to the string
 * @c: character to be locatead
 *
 * Return: pointer to the first occurence of the character,
 * in the string or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
