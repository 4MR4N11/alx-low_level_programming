#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			tmp2->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp2;
			free(tmp);
			return (1);
		}
		tmp2 = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
