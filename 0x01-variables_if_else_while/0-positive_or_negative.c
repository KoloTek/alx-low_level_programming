#include <stdio.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >0)
	{
		printf("%d is positive/n", n);
	}
	else (n == 0)
	{
		printf("%d is Zero/n", n);
	}
	else (n < 0)
	{
		printf("%d is negative/n", n);	
	}
	return (0);
}
