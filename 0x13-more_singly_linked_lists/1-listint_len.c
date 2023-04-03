#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
