#include "main.h"
/**
 * set_string - sets the value of a pointer to a character
 * @s: address of a pointer to a character
 * @to: pointer to a character
 */
void set_string(char **s, char *to)
{
	*s = to;
}
