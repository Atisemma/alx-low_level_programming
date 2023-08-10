#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of strings containing the arguments
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *conc;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			len++;
	}

	conc = malloc(sizeof(char) * (len + 1));

	if (conc == NULL)
		return (NULL);

	k = 0;

	for (k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			conc[k] = av[i][j];

		conc[k] = '\n';
	}

	conc[k] = '\0';

	return (conc);
}
