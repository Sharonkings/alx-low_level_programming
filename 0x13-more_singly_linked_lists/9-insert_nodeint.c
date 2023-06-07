#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to pointer to the head of the linked list
 * @idx: index where the new node is added
 * @n: value to be stored in the new node
 *
 * Return: address of  the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev = *head;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; prev && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = prev->next;
			prev->next = new_node;
			return (new_node);
		}
	else
	       prev = prev->next;
	}
	return (NULL);
}


