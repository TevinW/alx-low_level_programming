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
	int data;

	if (*head == NULL)
	return (0);

	data = (*head)->n;
	free (*head);
	
	*head = (*head)->next;
	return (data);
}
