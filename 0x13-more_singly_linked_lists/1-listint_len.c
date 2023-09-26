#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Head of a list.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}

