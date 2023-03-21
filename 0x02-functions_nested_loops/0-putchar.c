#include "main.h"
#include <unustd.h>
/**
 * _putchar - writes the character c tostdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error -1 is returned , and error is set appropritaley
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
