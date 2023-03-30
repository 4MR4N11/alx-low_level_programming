#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list_t
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
