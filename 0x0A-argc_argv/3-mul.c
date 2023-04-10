#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: input string
 * Return: the integer after conversion
 */

int _atoi(char *s)
{
	int x, y, z, o, len, number;

	x = 0;
	y = 0;
	z = 0;
	o = 0;
	len = 0;
	number = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && o == 0)
	{
		if (s[x] == '-')
			y++;
		if (s[x] >= '0' && s[x] <= '9')
		{
			number = s[x] - '0';
			if (y % 2)
				number = -number;
			z = z * 10 + number;
			o = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			o = 0;
		}
		x++;
	}
	if (o == 0)
		return (0);
	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int answer, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	answer = n1 * n2;
	printf("%d\n", answer);
	return (0);
}
