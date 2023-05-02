#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the nwe node
 *
 * Return: pointer to the new node, or NULL if it is not possible
 * to add the new node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (i = 0; y && i < idx; i++)
	{
		if (i == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
			y = y->next;
	}

	return (NULL);
}
