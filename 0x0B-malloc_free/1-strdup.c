#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - copy of the string given as a parameter.
 * @str: char
 * Return: pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *p;
	int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;
	p = malloc(sizeof(char) * (x + 1));

	if (p == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		p[y] = str[y];

	return (p);
}
