#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the st of acceptable bytes
 *
 * Return: the number of bytes in the initial segment of s,
 * which consists only of bytes fromm accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
		int i, j;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					length++;
					break;
				}
			}
			if (accept[j] == '\0')
				break;
		}

		return (length);
}
