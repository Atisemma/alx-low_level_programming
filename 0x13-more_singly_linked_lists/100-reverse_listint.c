#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * reverse_listint - reverses a listint linked list
 * @head: double pointer to the head of the linked list
 *
 * Return: a pointer to te first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;


	return (*head);
}
