#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
