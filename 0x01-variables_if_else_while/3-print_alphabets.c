#include<stdio.h>
/**
 * main - Starting point
 * Description: 'Write a program that prints the alphabet in lower and upper'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;
	int e = 65;

	while (d <= 122)
	{
		putchar(d);
		d++;
	}
	while (e <= 90)
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
