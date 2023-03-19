#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m,i;

	for (m = 0; m < 100; m++)
	{
		for ( i = 0; i < 100; i++)
		{
			if (m < i)
			{
				putchar((m / 10) + 49);
				putchar((m % 10) + 49);
				putchar(' ');
				putchar((i / 10) + 49);
				putchar((i % 10) + 49);
				if (m != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
