#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *prev, *temp;

	if (!h || !*h)
		return (count);
	current = *h;
	prev = NULL;
	while (current)
	{
	if (current < current->next)
	{
	temp = current->next;
	free(current);
	count++;
	if (prev)
		prev->next = temp;
	else
		*h = temp;
	}
	else
	{
		free(current);
		count++;
		break;
	}
	current = temp;
	}
	*h = NULL;
	return (count);
}
