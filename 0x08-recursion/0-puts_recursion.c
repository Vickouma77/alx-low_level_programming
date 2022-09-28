#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion- prints string followed by a new line
 * @s: string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
