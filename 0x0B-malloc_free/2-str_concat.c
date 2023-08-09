#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int s1len = 0;
	int s2len = 0;
	int p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (p = 0; s1[p] != '\0'; p++)
		s1len++;
	for (p = 0; s2[p] != '\0'; p++)
		s2len++;

	conc = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (conc == NULL)
		return (NULL);
	for (p = 0; s1[p] != '\0'; p++)
		conc[p] = s1[p];
	for (p = 0; s2[p] != '\0'; p++)
		conc[s1len + p] = s2[p];
	return (conc);
}
