#include "main.h"

/**
 * print_alphabet -  print alphabet in lowercase followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
