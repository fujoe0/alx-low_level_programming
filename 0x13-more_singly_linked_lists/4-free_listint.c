#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of a list.
 *
 * Return: No return.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		listint_t *temp = head;
		head = head->next;
		free(temp);
	}
}

