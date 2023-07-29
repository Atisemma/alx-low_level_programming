#include "main.h"
/**
 *infinite_add - Adds two numbers
 *@n1: First number to add
 *@n2: Second number to add
 *@r: Buffer to store the result
 *@size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n, carry, sum;

	for (i = 0; n1[i] != '\0'; i++)

	for (j = 0; n2[j] != '\0'; j++)

	if (i >= (size_r - 1) || j >= (size_r - 1))
	return (0);

	carry = 0;
	r[size_r - 1] = '\0';
	i--;
	j--;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		sum = carry;

		if (i >= 0)
		sum += n1[i--] - '0';

		if (j >= 0)
		sum += n2[j--] - '0';

		carry = sum / 10;
		*r-- = sum % 10 + '0';
	}

	return (r + 1);
}
