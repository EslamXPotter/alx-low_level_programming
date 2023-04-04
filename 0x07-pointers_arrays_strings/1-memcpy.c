#include "main.h"
/**
 * _memcpy - function that copies from memory are to another memory are
 * @n: number of bytes to be copied
 * @src: where memory is stored
 * @dest: where memory to be copied
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
