#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to a head
 */
void free_listint2(listint_t **head)
{
	listint_t *tems;

	if (head == NULL)
		return;

	while (*head)
	{
		tems = (*head)->next;
		free(*head);
		*head = tems;
	}
	*head = NULL;
}
