#include <stdio.h>

/**
 * main - function
 * preform: print lowercase alphabet from reverse
 * return: always 0
 */
int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	
	putchar('\n');

	return(0);
}
