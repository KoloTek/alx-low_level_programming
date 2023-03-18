#include <stdio.h>

/**
 * main: function is lowercase of alphabet
 * perform: printing alphabet in loercase and uppercase
 * 
 * Return: Always 0
 */

 int main(void)
{
	char c = 'a';

	while (c <= 'z');

	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z')
	
	{
		putchar(c);
		c++;
	}
		pitchar('\n');
	return (0);
