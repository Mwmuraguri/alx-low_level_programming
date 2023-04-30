#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;

	for (x = 0, temp = head; temp != NULL && x < index; x++, temp = temp->next)
		;

	return (temp == NULL ? NULL : temp);
}
