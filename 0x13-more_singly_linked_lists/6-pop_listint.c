#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: pointer to a pointer to a head
 *
 * Return: the head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tems;
	int j;

	if (*head == NULL)
		return (0);

	tems = (*head)->next;
	j = (*head)->n;
	free(*head);
	*head = tems;

	return (j);
}

