#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node
 *
 * @head: head of the list
 *
 * @index: the nth number of nodes
 *
 * Return: the nth node or return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
