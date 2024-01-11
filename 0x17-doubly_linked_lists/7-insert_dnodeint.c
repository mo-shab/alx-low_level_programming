#include "lists.h"

/**
* insert_dnodeint_at_index - Function that insert a node into a position
* @h: the head of the list
* @idx: the index to where insert the node
* @n: the number to insert
*
* Return: the adress to the new node, NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
	return (newNode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free_dlistint(newNode);
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
	{
		free_dlistint(newNode);
		return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;
	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
