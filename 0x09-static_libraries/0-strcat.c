#include "main.h"
/**
 * _strcat - Write a function that concentrates two strings
 *
 * @src: Source input
 * @dest: Destination output
 *
 * Return: Returns dest that concentrates two string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i]; i++)
	dest[dest_len++] = src[i];

		dest[dest_len] = '\0';

	return (dest);
}
