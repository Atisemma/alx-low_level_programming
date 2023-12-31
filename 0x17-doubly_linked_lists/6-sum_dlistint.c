#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data in a dlistint_t list
 * @head: A pointer to the head of the list
 * Return: The sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
