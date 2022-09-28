#include "main.h"

/**
 * factorial- returns factorial of a given number
 * @n: an integer
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
