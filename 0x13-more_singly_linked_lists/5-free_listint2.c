#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * Description: At the end, the head will point to NULL.
 * So, as we know the tail always points to NULL, we will
 * be moving a temp pointer, free its memory if not NULL
 * Untill We reach the tail
 * @head: Head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}
