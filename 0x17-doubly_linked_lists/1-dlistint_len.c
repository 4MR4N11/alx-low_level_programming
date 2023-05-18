#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head of list.
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	dlistint_t *tmp;

	i = 0;
	tmp = (dlistint_t *)h;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
