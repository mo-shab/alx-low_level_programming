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
	dlistint_t *current;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return newNode;
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
