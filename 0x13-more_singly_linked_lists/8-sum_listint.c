#include "lists.h"

/**
 * sum_listint- returns the sum of all data (n)
 *
 * @head: head of the list
 *
 * Return: sum of all data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;

		head = head->n;
	}

	return (sum);
}
