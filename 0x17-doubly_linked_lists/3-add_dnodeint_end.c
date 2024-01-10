#include "lists.h"

/**
* add_dnodeint_end - function that adds new node at the end of a dlinst
* @head: the head of the list
* @n: the number to add to new node
* Return: the adresse of the new element or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t current = head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	while (current->next)
	{
		current = current->next;
	}

	newNode->prev = *current;
	current->next = *newNode;
	newNode->next = NULL;

	return (newNode);
}
