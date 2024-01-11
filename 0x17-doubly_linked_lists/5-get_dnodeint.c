#include "lists.h"
/**
* get_dnodeint_at_index - function that return node with index
* @head: the head of the list
* @index: the index
*
* Return: the node, or NULL if the node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
