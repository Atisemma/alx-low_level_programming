#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the target string
 * @needle: Pointer to the substring
 *
 * Return: Pointer to the located substring,
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{

			haystack++;
			pattern++;
		}

		if (!*pattern)
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
