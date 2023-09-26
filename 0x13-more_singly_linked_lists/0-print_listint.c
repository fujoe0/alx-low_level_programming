#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @head: Head of a list.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		node_count++;
	}
	return (node_count);
}
