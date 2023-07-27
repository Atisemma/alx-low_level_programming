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
	char *temp = dest;

	while (*dest)
	dest++;

	while (n && *src)
	*dest++ = *src++;
	n--;

	*dest = '\0';

	return (dest);
}
