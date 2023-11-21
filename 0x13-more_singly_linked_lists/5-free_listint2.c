#include "lists.h"
/**
 * free_listint2 - function freed list with NULL
 * @head: The head of the list
 *
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		next = *head;
		*head = (*(head))->next;
		free(next);
	}

	*head = NULL;
}
