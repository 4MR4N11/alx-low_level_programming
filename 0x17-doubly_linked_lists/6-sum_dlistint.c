#include "lists.h"

/**
 * sum_dlistint - returns the sum of all (n) of a dlistint_t linked list.
 * @head: pointer to head of list.
 * Return: sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (!head)
		return (sum);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
