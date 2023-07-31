#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list.
 * @head: pointer to head of linked list.
 *
 * Return: address where loop starts, NULL (no loop)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	if (!head || !head->next)
	{
		return (NULL);
	}

	while (s && f && f.next)
	{
		s = s->next;
		f = (f->next)->next;
		if (s == f)

		{
			s = head;

			while (s != f)
			{
				s = s->next;
				f = f->next;
			}

			return (s);
		}

	}

	return (NULL);
}
