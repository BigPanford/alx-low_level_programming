#include<stdio.h>
/**
 * main - Starting point
 * Description: 'Write a program that prints the lowercase alphabet in reverse'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 122;

	while (d >= 97)
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
}
