#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: input string
 * @accept: input string
 * Return: pointer to the byte if true, NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
