#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of
 * a linked list
 * @head: pointer to the first element in the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *y = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (i < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		i++;
	}

	y = x->next;
	x->next = y->next;
	free(y);
	return (1);
}
