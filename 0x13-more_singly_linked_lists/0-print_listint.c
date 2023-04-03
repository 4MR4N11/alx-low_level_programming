#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head pointer of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
