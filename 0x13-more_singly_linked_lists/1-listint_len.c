#include "lists.h"

/**
 * listint_len - returns n.o of elements in a linked lists
 * @h: pointer to the linked list
 *
 * Return: n.o of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
