#include "lists.h"

/**
 * add_nodeint_end - function add node to the end of the list
 * @head: The head of the list
 * @n: The value
 *
 * Return: The adress to the added new element
 * NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	new->n = n;
	current->next = new;

	return (new);
}
