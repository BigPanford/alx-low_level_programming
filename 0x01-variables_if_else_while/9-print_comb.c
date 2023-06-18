#include<stdio.h>
/**
 * main - Starting point
 * Description: 'Write a program that prints all possible combinations'
 * Return: Always 0 (Sucess)
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
