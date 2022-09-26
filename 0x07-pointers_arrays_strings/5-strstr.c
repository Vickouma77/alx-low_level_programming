#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr- locates a substring
 * @needle: substring
 * @haystack: the string
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}
