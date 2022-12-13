#include "main.h"

/**
 * _isalpha - Shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lower and uppercase letters. 0 for the rest.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

