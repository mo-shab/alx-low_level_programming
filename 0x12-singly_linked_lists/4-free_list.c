#include "lists.h"
/**
 * free_list - function that free list
 * @list_t: list to be freed
 * 
 * Return: Nothing
*/

void free_list(list_t *head)
{
list_t *current;

while (current != NULL)
{
current = head->next;
free(current->str);
free(current);
head = current;
}
}
