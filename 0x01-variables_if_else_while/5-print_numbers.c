#include<stdio.h>
/**
 * main - Sarting point
 * Description: 'Write a program that prints all single digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
		if (d == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
