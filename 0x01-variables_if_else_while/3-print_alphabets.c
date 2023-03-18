#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
 int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char C = 'A';

	while (C <= 'Z')
	
	{
		putchar(c);
		c++;
	}
	
	pitchar('\n');
	return (0);
}
