#include <stdlib.h>
#include "main.h"

/**
 * creat_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: NULL if size 0 or fail, pointer to array if success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
