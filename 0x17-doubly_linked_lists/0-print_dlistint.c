#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint.
 * @h: type dlistint point of prev and next node
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *n_nodes = h;

	while (n_nodes != NULL)
	{
		printf("%d\n", n_nodes->n);

		n_nodes = n_nodes->next;
	}
	return(n_nodes)
}
