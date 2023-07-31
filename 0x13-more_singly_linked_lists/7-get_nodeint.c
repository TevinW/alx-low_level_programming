#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: 1st node
 * @index: index of node to be returned
 *
 * Return: pointer to the nth node, NULL (node doesn't exist)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		if (!head)
			return (NULL)
		temp = temp->next;
		i++;
	}

	return (temp);
}
