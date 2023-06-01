#include "lists.h"
#include <string.h>
/**
 * add_node -Adds anew node at the beginning of a lis_t list
 * @head: a pointer to a pointer to the head of the lis_t list.
 * @str: the string to be duplicated and addded to te new node.
 *
 * Return: the address of the new elements, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int j;

	j = 0;

	while (str[j])
		j++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
	new_node->str = strdup(str);
	new_node->len = j;
	return (new_node);
}

