#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of '0' or '1'characters
 * Return: the converted number or 0 if there is an invalid character or,
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int power = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;

	while (i >= 0)
	{
		decimal += (b[i] - '0') * power;
		power *= 2;
		i--;
	}

	return (decimal);
}
