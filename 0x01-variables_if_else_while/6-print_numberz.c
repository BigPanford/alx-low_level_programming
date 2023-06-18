#include<stdio.h>
/**
 * main - Starting point
 * Description:' Write a program that prints all single digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + 48);
	}
	putchar('\n');
	return (0);
}
