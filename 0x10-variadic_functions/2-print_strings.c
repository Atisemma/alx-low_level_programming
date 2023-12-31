#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the string
 * @n: the number of strings passed to the function
 * @...: variabe number of intergersto be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
