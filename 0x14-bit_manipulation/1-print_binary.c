#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binsry
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size;

	size = sizeof(n) * 8 - 1;

	mask <<= size;

	while (mask)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');

		mask >>= 1;
	}
}
