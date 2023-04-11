#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: returns a pointer to a 2 dimensional array of integers,
 * NULL on fail
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		g[x] = malloc(sizeof(int) * width);

		if (g[x] == NULL)
		{
			for (; x >= 0; x--)
				free(g[x]);

			free(g);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			g[x][y] = 0;
	}

	return (g);
}
