#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Head of linked list
 * Return: The head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
