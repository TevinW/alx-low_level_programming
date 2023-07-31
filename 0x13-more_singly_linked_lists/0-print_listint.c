#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: n.o of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
