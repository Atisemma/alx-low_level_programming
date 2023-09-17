#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = (sizeof(n) * 8) - 1;

	while (bit >= 0)
	{
		if ((n >> bit) & 1)
			_putchar('1');
		else
			_putchar('0');
		bit--;
	}
}

