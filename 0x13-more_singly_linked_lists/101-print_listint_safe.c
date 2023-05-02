#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, nodes = 0;
	const listint_t *current = head;
	listint_t *visited[1024];

	while (current)
	{
		for (i = 0; i < nodes; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (nodes);
			}
		}

		visited[nodes++] = (listint_t *)current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (nodes);
}
