#include "main.h"
#include <stddef.h>
/**
 * _puts - Prints a string
 * @str: A pointer to a character
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
