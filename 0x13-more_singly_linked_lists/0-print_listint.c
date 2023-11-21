#include "lists.h"

/**
 * print_listint - Function that print all the elment of a list
 * @h: the head of the list to be printed
 *
 * Return: number of the list
*/

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
