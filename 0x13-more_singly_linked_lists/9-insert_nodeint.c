#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * in a linked list
 * @head: pointer to 1st node in linked list
 * @idx: index new node is to be added
 * @n: data to be inserted in the new node
 *
 * Return: address to new node, NULL (failure)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (!temp || !temp->next)
			return (NULL);

		temp = temp->next;
	}

	temp->next = temp->next;
	temp->next = new_node;
	return (temp);
}
