#include "main.h"
#include <stdio.h>

/**
 * set_string- sets value of a pointer to a char
 * @s: value of a pointer
 * @to: value of pointer of a char
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
