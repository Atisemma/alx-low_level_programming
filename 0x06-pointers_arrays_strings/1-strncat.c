#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings
 * @dest: A pointer to the destination
 * @src: A pointer too the source
 * @n: bytes to be concatenated from src
 * Return: A pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while ( *ptr != '\0')
	{
		ptr++;
	}

	for (int i = 0; i < n && *src ! = '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
