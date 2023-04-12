#include "search_algo.h"

/**
 * binary_search - searches for value in a sorted
 * array of integers using Binary search algorithm
 *
 * @array: pointer to first array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value);
{
	size_t i, x, y;

	if (array == NULL)
		return (-1);

	for (x = 0, y = size - 1; y >= x;)
	{
		printf("searching array: ");
		for (i = x; i < y; i++)
			printf("%d\n, ", array[i]);
		printf("%d\n", array[i]);

		i = x + (y - x) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
