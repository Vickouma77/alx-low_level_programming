#include "main.h"

/**
 * add_nodeint - adds new node 
 *
 * @head: head of list
 *
 * @n: n elements
 *
 * Return: he address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *new;

	new = malloc(sizeof(listint));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
