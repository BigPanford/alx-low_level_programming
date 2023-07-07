#include "main.h"
/**
 * _puts - buiding a multilingual puzzle
 * @str: the string to be printed
 * _putchar: prints a new line
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{

	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
