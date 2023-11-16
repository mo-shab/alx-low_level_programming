#include "lists.h"

/**
 * print_list - function that print all the elemnt of a list
 * @h: The head of the list
 *
 * Return: Number of Element printed
*/

size_t print_list(const list_t *h)
{
int n = 0;
list_t *current;

current = (list_t *)malloc(sizeof(list_t));
*current = *h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", current->len, current->str);
}
current = current->next;
n++;
}
free(current);
return (n);
}
