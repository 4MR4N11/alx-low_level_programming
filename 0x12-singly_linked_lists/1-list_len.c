#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
