#include "main.h"
#include <string.h>
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
	int len1, len2, carry, sum, i, j;

	len1 = strlen(n1);
	len2 = strlen(n2);
	int carry = 0 sum = 0;

	if (size _r <= len1 || size _r <= len2)
		return 0;

	for (int i = len1 - 1, j = len 2 - 1, k = size
