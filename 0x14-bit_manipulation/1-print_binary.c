#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1 << 31;

	while ((mask & n) == 0)
	{
		mask = mask >> 1;
	}

	while (mask > 0)
	{
		if (mask & n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
