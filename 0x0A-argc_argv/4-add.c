#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check numbers in string
 * @str: array string
 * Return: Always 0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if numbers in string*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - add positive numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through th array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi - converts string to integer*/
			sum += str_to_int;
		}

		/*condition if a number contains symbols*/

		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*prints the result*/
	return (0);
}
