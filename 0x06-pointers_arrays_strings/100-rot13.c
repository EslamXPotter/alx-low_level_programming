#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijlkmnopqrstuvwyxzABCDEFGHIJLKMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwyxzabcdefghijlkmNOPQRSTUVWXYZABCDEFGHIJLKM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
