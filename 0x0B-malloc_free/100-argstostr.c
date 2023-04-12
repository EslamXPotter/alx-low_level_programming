#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0 or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, X = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			X++;
	}

	X += ac;

	str = malloc(sizeof(char) * X + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
