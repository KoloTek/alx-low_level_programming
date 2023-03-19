#include <stdio.h>

/**
 * main function
 * printing number in asending order sperated with ','
 * result: always 0
 */
int main(void)
{
	int i = 0;

	for (i = 10; i < 99; i++)
	{
		putchar(i);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
