#include "main.h"

/**
 * _memset - function that fills a block of memory with a certain constant
 * @n: number of bytes to be filled
 * @b: the constant to fill
 * @s: the adress of the memory to be filled
 * Return: a ponter tothe memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
