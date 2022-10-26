#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints all elements of listint_t
 *
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		node++
	}
	return (node);
}
