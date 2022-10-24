#include "lists.h"
#include <stdio.h>

#include "lists.h"

/**
 * list_len- returns number of element
 *
 * @h: linked list_t list.
 *
 *
 * Return: The number of elements in
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
