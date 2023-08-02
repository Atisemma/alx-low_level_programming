#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of two diagonals,
 * of a square matrix of integers
 * @size: size of the square matrix
 * @a: pointer to the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *((a + i * size) + j);

			if (i + j == size - 1)
				sum2 += *((a + i * size) + j);
		}
	}

	printf("Sum of first diagonal: %d\n", sum1);
	printf("Sum of second diagonal: %d\n", sum2);
}
