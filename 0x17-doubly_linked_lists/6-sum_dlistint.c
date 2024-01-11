#include "lists.h"

/**
* sum_dlistint - function that return the sum of all the data of a list
* @head: the head of the list
*
* Return: The sum or 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
