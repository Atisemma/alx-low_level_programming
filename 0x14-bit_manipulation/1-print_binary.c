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
	int size = sizeof(n) * 8;
	int i;

	for (i = size - 1; 1 >= 0; i--)
	{
	if ((n >> i) & 1)
		break;
	}

	for (; i >= 0; i--)
	{
		mask = mask << i;
		if ((n & mask) >> i)
			_putchar ('1');
		else
			_putchar ('0');
	}
}
