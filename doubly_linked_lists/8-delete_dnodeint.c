#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index
*							index of a dlistint_t linked list.
* @head: Pointer to pointer to the head of the list.
* @index: Index of the node to delete (starting at 0).
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		tmp = *head;
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (tmp = *head; tmp && i < index; tmp = tmp->next, i++)
		;

	if (!tmp)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
