#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (head == NULL)
		return;
	tmp1 = *head;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*head = NULL;
}
