#include<stdio.h>
/**
 * main - Starting Point
 * Description: Write a program that prints all possible different combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = '0';
	int e = '1';

	while (d <= '8')
	{
		while (e <= '9')
		{
			for (d = '0'; d < '9'; d++)
			{
				for (e = d + 1; e <= '9'; e++)
				{
					putchar(d);
					putchar(e);
					if (d == '8' && e == '9')
					{
						putchar('\n');
						}
					else
						{
							putchar(',');
							putchar(' ');
					}
				}
			}
			e++;
		}
		e = '0';
		d++;
	}
	return (0);
}

