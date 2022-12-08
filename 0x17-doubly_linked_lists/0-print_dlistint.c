#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint.
 * @h: type dlistint point of prev and next node
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t _nodes = 0;

	while (h)
	{
		_nodes++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return(_nodes);
}
