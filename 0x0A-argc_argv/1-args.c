#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*igonre argv*/
		printf("%d\n", argc - 1);
	return (0);
}
