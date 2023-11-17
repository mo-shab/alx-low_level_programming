#include "lists.h"
/**
 * free_list - function that free list
 * @head: list to be freed
 * 
 * Return: Nothing
*/

void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head->next;
free(current->str);
free(current);
head = current;
}
}
