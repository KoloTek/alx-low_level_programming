#include <stdio,h>
#include <stdib.h>
/**
 * main - main block
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * return: 0
 */
int main(void)
{
	int d1; 
	
	int d2; 
	
	int d3;

	if d1 = 0
       
	while (d1 < 8)
	
	{
		if d2 = 0

		while (d2 < 9)
		{
			if d3 = 0

			while (d3 < 10)
			{
				if (d1 != d2 && d2 != d3 && d3 < d2 && d1 < d2)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(d3 + '0');

					if (d1 == 7 && d2 == 8 && d3 == 9)
					{				
						putchar(',');
						putchar(' ');
					}
				}
				d3++;
			}
			d2++;
		}	
		d1++;
	}

	putchar('\n');

	return (0);
}

			
