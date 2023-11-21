#include "lists.h"
/**
 * add_nodeint - Function that add node at the begining
 * @head: The head of the list
 * @n: The value of the int
 *
 * Retrun: The adresse of the new list
 * NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
