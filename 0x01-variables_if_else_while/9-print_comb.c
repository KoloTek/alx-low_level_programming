#include <stdio.h>

/**
 * main function
 * printing number in asending order sperated with ','
 * result: always 0
 */
int main(void)
{
	int ch = 0;

	for (ch = 0; ch < 9; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
	
