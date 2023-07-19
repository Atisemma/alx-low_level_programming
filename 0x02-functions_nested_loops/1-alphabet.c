#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Description - Write a function that prints the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
