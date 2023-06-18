#include<stdio.h>
/**
 * main - Sarting point
 * Description: 'Write a program that prints all single digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		printf("%d", d);
	}
	putchar('\n');
	return (0);
}
