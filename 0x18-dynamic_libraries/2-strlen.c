#include "main.h"
#include <stdio.h>

/**
 * _strlen- returns length of a string
 *
 * @s: string to check
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

