#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data (n)
*				 of a dlistint_t linked list.
* @head: Pointer to the head of the linked list.
* Return: Sum of all n, or 0 if the list is empty.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
