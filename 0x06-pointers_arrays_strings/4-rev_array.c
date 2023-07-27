#include "main.h"
/**
 * reverse_array - reverses the contents contents of an arary of intergers
 *
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
