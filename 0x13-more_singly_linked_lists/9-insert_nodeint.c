#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be assigned to the new node
 *
 * Return: pointer to the newly added node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp1, *tmp2;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp1 = *head;
	while (tmp1)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else if (i == idx)
		{
			tmp2->next = new;
			new->next = tmp1;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
