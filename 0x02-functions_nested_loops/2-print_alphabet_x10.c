#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; ch <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
