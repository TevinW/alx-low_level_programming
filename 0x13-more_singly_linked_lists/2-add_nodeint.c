#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a linked list
 * @head: pointer to first node
 * @n: data to insert in that new node
 *
 * Return: address of new element, NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
