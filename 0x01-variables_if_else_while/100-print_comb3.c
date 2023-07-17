#include <stdio.h>

/**
  * main - Prints all possible different combinations of two digits
  *
  * Return: Always (0)
  */
int main(void)
{
	int a, b;

	for (a = 31; a < 40; a++)
	{
		for  (b = 32; b <= 39; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a == 38 && b == 39)

					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
