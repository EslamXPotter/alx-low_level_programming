#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character to be located
 * @s: input string
 * Return: pointer to c if found or NULL
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
