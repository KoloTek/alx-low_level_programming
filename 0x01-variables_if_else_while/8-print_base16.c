#include <stdio.h>

/**
 * main: function
 * preform: prints all the numbers 
 * of base 16 in lowercase
 *
 * return: always 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
