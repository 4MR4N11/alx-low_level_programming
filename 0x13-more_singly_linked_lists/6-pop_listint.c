#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer to a pointer to the first element of the list
 *
 * Return: the data (n) of the deleted node, 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n_tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n_tmp = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n_tmp);
}
