#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 * print_with_newline - prints name followed by new line
 * @name: name to be printed
 */
void print_with_newline(char *name)
{
	if (name != NULL)
	{
		printf("%s\n", name);
	}
}
