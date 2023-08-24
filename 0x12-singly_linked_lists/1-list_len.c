#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns n.o of elements in a linked list
 * @h: pointer to the linked list list_t
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
