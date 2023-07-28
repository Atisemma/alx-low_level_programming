#include "main.h"
#include <stddef.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all word of a string
 * @str: input string
 *
 * Return: Pointer to the resultIng string
 */
char *cap_string(char *str)
{
	if (str != NULL)
	{
		int capitalize_next = 1;
		char *ptr = str;

		while (*ptr != '\0')
		{
			if (capitalize_next && islower(*ptr))
			{
				*ptr = toupper(*ptr);
			}
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ' '
		|| *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"'
		|| *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		ptr++;
	}

	return (str);
}
