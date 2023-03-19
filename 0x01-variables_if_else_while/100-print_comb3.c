#include <stdio.h>

/**
 * main - main block
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */
int main(void)
{
	int x;
	int y;
	
	for (x = 0; x < 10; x++)
	{
		{
			for (y = 0; y < 10; y++)
			{
				putchar(x + '0');
				putchar(y + '0');

				if (x == 9; && y == 9)
			}
				{
					break;
				}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
