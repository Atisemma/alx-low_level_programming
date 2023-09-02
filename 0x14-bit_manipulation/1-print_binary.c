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
	int bits = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	mask << bits;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');

		mask >>= 1;
	}
}
