#include <stdio.h>
/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char *a = "_putchar\n";

	while (*a)
	{
		putchar(*a);
		a++;
	}
	return (0);
}

