#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of list.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	dlistint_t *tmp;

	i = 0;
	tmp = (dlistint_t *)h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
