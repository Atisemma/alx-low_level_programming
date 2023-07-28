#include "main.h"
/**
 * rot13 - rotat alpabet by 13 places
 * @str:input string to rotate
 * Return: the rotated string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alph[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13_alph[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
