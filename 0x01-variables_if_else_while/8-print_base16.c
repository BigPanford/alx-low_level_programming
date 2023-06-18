#include<stdio.h>
/**
 * main - Starting point
 * Desciption: 'Write a program that prints all the numbers of base 16'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (e = 97; e <= 102; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
