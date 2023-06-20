#include "main.h"

/**
 * main - Starting point
 * print_aphabet - Make the alphabet
 * Retuen: void
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

