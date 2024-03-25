#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase o 0 for anyting else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
