#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 * @head: Pointer to the head of a list.
 * @n: Value to add to the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}

