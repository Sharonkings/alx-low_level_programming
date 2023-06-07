#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of  linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node for or NULL if nodes doesnt exist<F2>
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tems = head;
	unsigned int i = 0;

	while (tems)
	{
		if (i == index)
			return (tems);
		i++;
		tems = tems->next;
	}

	return (NULL);
}

