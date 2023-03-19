#include <stdio.h>

/**
 * main - main function
 * Description: Print only the smallest 
 * combination of two digits
 * return: 0
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
			putchar(';');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
