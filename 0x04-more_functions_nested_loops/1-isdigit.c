#include "main.h"
/**
 * _isdigit - Check if a character is a digit
 * @n: The number to be checked
 * Return: 1 fo a character that will be digit or 0 for any else
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
