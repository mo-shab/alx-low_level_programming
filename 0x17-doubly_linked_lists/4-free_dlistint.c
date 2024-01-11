#include "lists.h"

/**
* free_dlistint - function that free a list
* @head: the list
* Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
