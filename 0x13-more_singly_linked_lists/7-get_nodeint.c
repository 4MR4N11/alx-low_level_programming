#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node at the specified index
 * or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
