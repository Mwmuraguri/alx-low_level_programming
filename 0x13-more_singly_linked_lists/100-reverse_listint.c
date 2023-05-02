#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *prev = NULL;

	if (!head || !(*head))
		return (NULL);

	prev = *head;
	*head = (*head)->next;

	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}

	(*head) = prev;

	return (*head);
}
