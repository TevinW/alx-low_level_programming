#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to first element in the linked list
 *
 * Return: head node's data, 0 (linked list is empty)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == 0)
		return (0);

	data = *head;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

