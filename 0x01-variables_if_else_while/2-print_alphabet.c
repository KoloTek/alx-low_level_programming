#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
