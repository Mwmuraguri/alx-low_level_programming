#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *last_n = *head;
	unsigned int len = strlen(str);

	new_n = malloc(sizeof(list_t));
	if (!new_n)
	return (NULL);
	new_n->str = strdup(str);
	if (!new_n->str)
	{
	free(new_n);
	return (NULL);
	}
	new_n->len = len;
	new_n->next = NULL;
	if (*head == NULL)
	{
	*head = new_n;
	return (new_n);
	}
	while (last_n->next)
	last_n = last_n->next;
	last_n->next = new_n;
	return (new_n);
}
