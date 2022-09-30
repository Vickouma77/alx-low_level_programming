#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr- locates a character in a string
 * @c: a character
 * @s: a string
 * Return: the pointer of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
