#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Head of linked list
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
