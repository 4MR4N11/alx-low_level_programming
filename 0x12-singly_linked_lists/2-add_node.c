#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list_t
 * @str: string to be added to new node
 * Return: address of new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
