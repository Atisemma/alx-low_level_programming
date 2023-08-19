#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints thr opcodes of its main function
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, 1 if incorrect number of aruments,
 * or 2 if negative number of arguments
 */
int main(int argc, char *argv[])
{
	char *main_opcode;

	int num_of_bytes;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_opcode = (char *)main;

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x", (unsigned char)main_opcode[i]);
	}

	printf("\n");

	return (0);
}
