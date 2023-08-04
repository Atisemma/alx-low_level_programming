#include "main.h"
/**
 * checker - recursively checks if a string is a palindrome
 * @s: string to be checked
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int checker(char *s, int start, int end)
{
	int len = (0);

	if (start == end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int n = *s;

	return (checker(s, 0, n - 1));
}
