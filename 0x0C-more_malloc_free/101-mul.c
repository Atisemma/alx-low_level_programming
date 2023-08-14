#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * multiply - multiplies two positive numbers
 * @num1: first number to be multiplied
 * @num2: second numnber to be multiplied
 * Return: the product of num1 and num2
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}

/**
 * is_numeric - checks if a string is numeric
 * @str: string to be checked
 * Return: true if the string is numeric, false otherwise
 */
bool is_numeric(char *str)
{
	int i;

	if (str == NULL)
		return (false);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
}

/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: argumeny vector
 * Return: exit status of the proram
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		printf("Error\n");
		exit(98);
	if (!is_numeric(argv[1]) || !is_numeric(argv[2]))
		printf("Error\n");
		exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%u\n", result);

	return (0);
}


