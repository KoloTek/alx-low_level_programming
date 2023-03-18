#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function,resulu
 * perform: wirte alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	{
		for ( ch = 'a'; ch <= 'z'; ch++);
			putchar(ch);
			putchar('\n');
	}

	return (0);
}
