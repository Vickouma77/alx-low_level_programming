#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: argument count
 * @argv: vector argument
 * Return: 0 for success
 */
int main(int argc, argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
                return (0);
}
