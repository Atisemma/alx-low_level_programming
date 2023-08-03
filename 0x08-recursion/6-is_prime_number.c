#include "main.h"
/**
 * checker - checks recursively the input from is_prime_number
 * @n: iterator
 * @i: The value to start dividing n by
 *
 * Return: 1 if n is a prime number, 0 otherwise
*/
int checker(int n, int i)
{
	if (n < 2)
		return (0);

	if (i < n)
	{
		if (n % i == 0)
			return (0);
	}
	else if (i > n)
		return (checker(n, i + 1));

	return (1);
}

/**
 * is_prime_number - checks if the number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	return (checker(n, 2));
}
