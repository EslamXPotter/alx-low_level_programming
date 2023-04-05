#include "main.h"
int true_prime_number(int n, int x);
/**
 * is_prime_number - determine if n is a prime number
 * @n: number to be determined
 * Return: 1 if n is a prime number or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (true_prime_number(n, n - 1));
}

/**
 * true_prime_number - determine if n is a prime number
 * @n: number to be determined
 * @x: iterator
 * Return: 1 if n is aprime number of 0 if otherwise
 */

int true_prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (true_prime_number(n, x - 1));
}
