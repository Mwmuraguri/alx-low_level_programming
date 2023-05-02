#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to pointer to the first element in the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{

		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
