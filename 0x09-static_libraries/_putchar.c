#include <unistd.h>

/**
 * _putchar- writes the character c stdout
 * @c: The character to print
 * Return: 1-success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
