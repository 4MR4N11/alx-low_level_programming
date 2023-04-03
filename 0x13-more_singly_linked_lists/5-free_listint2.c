#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
