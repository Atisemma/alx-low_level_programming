#include "main.h"
#include <stdio.h>
/**
 * get_bit -  returns the value of a bit in a given index
 * @n: the number to retrieve the bit ffom
 * @index: the index of the bit tor retrieve
 * Return: the value of the bit at the given index 0r -1 if an,
 * error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;

	if (n & mask)
		return (1);
	else
		return (0);
}
