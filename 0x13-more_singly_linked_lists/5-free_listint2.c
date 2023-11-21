#include "lists.h"
/**
 * free_listint2 - function freed list with NULL
 * @head: The head of the list
 *
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
