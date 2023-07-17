#include <stdio.h>
/**
  * main - Printspossible combination of three digits
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; a <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != 7)

					putchar(',');
					putchar(' ');
			}

			}
		}
	}
	putchar('\n');

	return (0);
}
