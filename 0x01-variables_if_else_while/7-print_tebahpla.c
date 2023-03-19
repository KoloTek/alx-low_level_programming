#include <stdio.h>

/**
 * main: print lowercase alphabet from reverse
 *
 * return: always 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);

	putchar('\n');

	return (0);
}
