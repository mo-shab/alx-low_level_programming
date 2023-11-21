#include "lists.h"

/**
 * free_listint - function that free list
 * @head: The head of the list to be freed
 *
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
