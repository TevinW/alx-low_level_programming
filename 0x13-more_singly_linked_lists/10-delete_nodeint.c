#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at certain index
 * in linked list
 * @head: pointer to the first element of linked list
 * @index: index of node to be deleted
 *
 * Return: 1 (Success), -1 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
