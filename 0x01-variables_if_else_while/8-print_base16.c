#include <stdio.h>

/**
 * main: function
 * preform: prints all the numbers of base 16 in lowercase
 * return: always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'h'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
