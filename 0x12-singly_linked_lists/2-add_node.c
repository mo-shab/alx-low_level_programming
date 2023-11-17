#include "lists.h"

/**
 * add_node - function add new node to the begening
 * @head: the head of the list
 * @str: the char to be added into the list
 *
 * Return: Pointer the the head of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *node = malloc(sizeof(list_t));
int len =0;

if (node == NULL)
return (NULL);

node->str = strdup(str);
while (str[len] != '\0')
len++;
node->len = len;
node->next = *head;
*head = node;

return (node);
}
