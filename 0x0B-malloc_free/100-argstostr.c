#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of strings containing the arguments
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
