#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 * @head: pointer to pointer to head
 * @n: value of the data in new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (prev->next)
			prev = prev->next;
		prev->next = new;
	}
		return (new);
}
