#include<stdio.h>
/**
 * main - Starting piont
 * Description: Write a program that prints all possible combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

				if (a == 99 && b == 98)
					continue;
				putchar(',');
				putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
