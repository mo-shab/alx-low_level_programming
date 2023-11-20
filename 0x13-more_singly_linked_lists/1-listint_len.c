#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a linked listint_t list.
 * @h: The head of the list
 *
 * Return: Lenght of the list
*/

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
