#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the head of a list.
 *
 * Return: No return.
 */
void free_listint2(listint_t **head)
{
	if (head != NULL && *head != NULL)
	{
		listint_t *current = *head;
		listint_t *next_node;

		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}

		*head = NULL;
	}
}

