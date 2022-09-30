#include "main.h"
#include <stdio.h>

/**
 * _strcmp- compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;


	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}
