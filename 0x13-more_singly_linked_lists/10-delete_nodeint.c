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
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < (index - 1); i++)

		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
