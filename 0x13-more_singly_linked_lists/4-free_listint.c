#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to a pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *tems;

	while (head)
	{
		tems = head->next;
		free(head);
		head = tems;
	}
}
