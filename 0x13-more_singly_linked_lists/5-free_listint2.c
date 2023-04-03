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

	if (*head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
