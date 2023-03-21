#include "main.h"
/**
 * _islower - chech for lowercase character
 * @c: is the char tp be checked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
