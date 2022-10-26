#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements
 *
 * @h: head of a list
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
