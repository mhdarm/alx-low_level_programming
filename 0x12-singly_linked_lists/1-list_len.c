#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: singly linked list
 *
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
		nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
