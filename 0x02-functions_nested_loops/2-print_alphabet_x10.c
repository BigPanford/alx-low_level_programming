#include "main.h"

/**
 * print_alphabet - make alphabet x10 times
 * Return: the return is void followed by new line
 */
void print_alphabet_x10(void);
{
	char d;
	int e = 0;

	while (e <= 9)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
	e++;
	}
}
