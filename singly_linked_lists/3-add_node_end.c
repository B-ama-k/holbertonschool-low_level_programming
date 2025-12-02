#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Pointer the head of the list_t list.
* @str: String to be added to the list_t list.
* Return: If function fails - NULL else - the address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int slen;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	for (slen = 0; str[slen]; slen++)
		;

	new->len = slen;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (new);
}
