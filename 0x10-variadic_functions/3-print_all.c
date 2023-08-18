#include "variadic_functions.h"
/**
 * print_all - Prints arguments based on format.
i* @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;
	
	int index = 0;
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
