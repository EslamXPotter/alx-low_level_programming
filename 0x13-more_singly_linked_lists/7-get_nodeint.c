#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of
 * a listint_t linked list
 * @head: first node in the list
 * @index: the index of the node
 *
 * Return: pointer to the node , or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x = head;

	while (x && i < index)
	{
		x = x->next;
		i++;
	}

	return (x ? x : NULL);
}
