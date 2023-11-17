#include "lists.h"

/**
 * add_node_end - function add new node to the end
 * @head: the head of the list
 * @str: the char to be added into the list
 *
 * Return: Pointer the the head of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node = malloc(sizeof(list_t));
int len = 0;
list_t *current;

if (node == NULL)
return (NULL);

if (*head == NULL)
{
node->str = strdup(str);
while (str[len] != '\0')
len++;
node->len = len;
*head = node;
return (node);
}

current = *head;

while (current->next != NULL)
current = current->next;

node->str = strdup(str);
while (str[len] != '\0')
len++;
node->len = len;
current->next = node;

return (node);
}
