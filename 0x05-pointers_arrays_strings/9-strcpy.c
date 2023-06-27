#include "main.h"
#include <stdio.h>
/**
 * char * _strcy - a function that copies the string point by src
 * @dest: copy toi
 * @src: copy from
 * Description: copy the string pointed to by pointer src
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
