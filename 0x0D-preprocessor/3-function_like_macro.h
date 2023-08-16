#ifndef ABS_MACRO_H
#define ABS_MACRO_H

#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
 *  main - Entry point
 *  Return: 0
 */
int main(void)
{
	int num1 = -5;
	int num2 = 10;

	printf("The absolute value of %d is %d\n", num1, ABS(num1));
	printf("The absolute value of %d is %d\n", num2, ABS(num2));

	return (0);
}
#endif
