#include "lists.h"

/**
 * sum_listint -calculates the sum of all the data(n) in a listint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tems = head;

	while (tems)
	{
		sum += tems->n;
		tems = tems->next;
	}
	return (sum);
}

