#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @index: is the index of the bit
 * @n: number to search
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
