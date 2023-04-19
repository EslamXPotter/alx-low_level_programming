#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: number of the elements in the array
 * @cmp:  pointer to the function to be used to compare values
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
