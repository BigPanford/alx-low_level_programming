#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int d, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (n = 0; av[d][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
		for (n = 0; av[d][n]; n++)
		{
			str[r] = av[d][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
