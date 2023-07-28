#include "main.h"
/**
 * leet - encodes a string
 * @str: the input string
 * Return: the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *letters = "aAeEoOtTlL";
	char *leets = "4433007711";
	int i = 0;
	int j;

	while (*ptr != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (*ptr == letters[j])
			{
				*ptr = leets[j];
				break;
			}
			j++;
		}
		ptr++;
	}

	return (str);
}
