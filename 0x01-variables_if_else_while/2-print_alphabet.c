#include<stdio.h>
/**
 * main - Starting point
 * Description:'Write a program that prints the alphabet in lowercase'
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int d = 97;

	while (d <= 122)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
