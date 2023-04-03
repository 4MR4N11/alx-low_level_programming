#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp1, *tmp2;

	tmp1 = *head;
	i = 0;
	while (tmp1)
	{
		if (index == 0)
		{
			tmp1 = (*head)->next;
			free(*head);
			*head = tmp1;
			return (1);
		}
		if (i ==  index)
		{
			tmp2->next = tmp1->next;
			free(tmp1);
			tmp1 = tmp2;
			return (1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}
	return (-1);
}
