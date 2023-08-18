#include "variadic_functions.h"
/**
 * print_all - Prints arguments based on format.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	int formatIndex = 0;

	va_start(args, format);

	while (format[formatIndex] != '\0')
	{
		if (format[formatIndex] == 'c')
			c = (char)va_arg(args, int);
		printf("%c", c);
		if (format[formatIndex] == 'i')
			i = va_arg(args, int);
		printf("%d", i);
		if (format[formatIndex] == 'f')
			f = (float)va_arg(args, double);
		printf("%f", f);
		if (format[formatIndex] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}

		formatIndex++;
	}

	va_end(args);
	printf("\n");
}
