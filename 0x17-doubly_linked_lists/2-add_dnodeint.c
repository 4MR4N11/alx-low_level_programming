#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head of list.
 * @n: integer to add to new node.
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	tmp = *head;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!tmp)
	{
		*head = new;
		return (new);
	}
	new->next = tmp;
	tmp->prev = new;
	*head = new;
	return (new);
}
