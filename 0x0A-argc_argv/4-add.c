#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * checker - checks if the given string is a positive number
 * @str: string to be checked
 * Return: 1 if it is a positive number, 0 otherwise
 */
int checker(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!checker(argv[1]))
		{
			printf("error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
