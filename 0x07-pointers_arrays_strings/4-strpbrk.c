#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accepted: The set of bytes to be searched for
 *
 * Return: if a set is matched - a pointer to the matched byte
 * If no set is matched - NULL
 */
char *_strpbrk(char *s, char *accepted)
{

	int index;

	while (*s)
	{
	for (index = 0; accepted[index]; index++)
	{
	if (*s == accepted[index])
	return (s);
	}
	s++;
	}
	return ('\0');
}
