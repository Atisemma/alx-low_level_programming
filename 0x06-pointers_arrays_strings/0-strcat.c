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
	int l, m;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (m = 0; src[m] = '\0'; m++)
	{
		dest[l] = src[m];
		l++;
	}
	return (dest);
}
