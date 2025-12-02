#include "lists.h"

/**
* print_list - Prints all the elements of list_t.
* @h: The list_t list.
* Return: Number of nodes in h.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");

	return count;
}
