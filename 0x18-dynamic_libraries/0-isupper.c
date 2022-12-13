#include "main.h"
#include <stdio.h>

/**
 * _isupper- checks uppercase characters
 * @c: input character.
 * Return: 1 if is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
