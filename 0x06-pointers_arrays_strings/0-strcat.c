#include "main.h"
/**
 * _strcat - Write a function that concentrates two strings
 *
 * @src: Source input
 * @dest: Destination output
 *
 * Return: Reurns to dest that concentrates two string
 */
char *_strcat(char *dest, char *src)
{
	char s1, s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)

	for (s2 = 0; src[s2] = '\0'; s2++)
	{
		dest[s1] = src[s2];
		s1++;
	}
	return (dest);
}
