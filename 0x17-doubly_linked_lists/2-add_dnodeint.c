#include "lists.h"

/**
* add_dnodeint - function that add new node at the beginning of a double list
* @head: The head of the list
* @n: the int to put in the list
* Return: The adress of the new element or NULL if failed
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
