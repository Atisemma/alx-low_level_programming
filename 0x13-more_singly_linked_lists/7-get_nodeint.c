#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth mode  of a linked list
 * @head: pointer to the head node of the list
 * @index: index of the desired node, starting from 0
 * Return: pointer to the nth node or NULL, if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
