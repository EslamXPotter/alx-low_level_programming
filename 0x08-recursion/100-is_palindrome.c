#include "main.h"

int test_palindrome(char *s, int x, int len);

/**
 * is_palindrome - determine if the string in palindrome or not
 * @s: input string
 * Return: 1 if the string is a palindrome , 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * test_palindrome - test the character for palindrome
 * @s: input string
 * @x: iterator
 * @len: lenght of a string
 * Return: 1 if palindrome, 0 if not
 */

int test_palindrome(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (test_palindrome(s, x + 1, len - 1));
}
