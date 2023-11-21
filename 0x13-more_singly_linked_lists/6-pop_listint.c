#include "lists.h"
/**
 * pop_listint - function that delete the head
 * @head: the head of the list
 *
 * Return: The data of the head
*/
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head != NULL)
	{
		pop = *head;
		*head = (*(head))->next;
		n = pop->n;
		free(pop);
		return (n);
	}
	return (0);
}
