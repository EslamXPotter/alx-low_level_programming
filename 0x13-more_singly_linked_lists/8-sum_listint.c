#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: first node in the list
 *
 * Return: the result sum, or 0 if the list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}

	return (sum);
}
