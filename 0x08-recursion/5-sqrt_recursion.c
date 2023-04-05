#include "main.h"
int true_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number to calculate the square of
 * Return: the square root or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (true_sqrt_recursion(n, 0));
}

/**
 * true_sqrt_recursion - recurses to find the natural square root of n
 * @n: input number to calculate the square of
 * @i: iterator
 * Return: the square root
 */
int true_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (true_sqrt_recursion(n, i + 1));
}
