#include <stdio.h>
/**
  *main - Print alphabet in lowercase
  *Return: always 0 (Success)
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
