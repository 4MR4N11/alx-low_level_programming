#include "lists.h"

/**
 * sum_listint - returns the sum of all the values in a linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all values in the list, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	tmp = head;
	sum = 0;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
