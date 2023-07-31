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
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx -1); i++)
	{
		if (temp == 0 || temp->next == 0)
			return (NULL)
		
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
