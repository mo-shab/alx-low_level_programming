#include "lists.h"

/**
 * list_len - function return lenght of a list
 * @h: The head of the list
 *
 * Return: Number of Element printed
*/

size_t list_len(const list_t *h)
{
int len = 0;

while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
