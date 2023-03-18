                 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 * No Description:
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}




                              1

/*
 * File: 1-last_digit.c
 * Auth: Zaabi Mehdi
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n",
			n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}

	return (0);

}


        2


#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}

                     3

#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
		putchar('\n');
	return (0);
}


                       4


#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
Footer
© 2023 GitHub, Inc.
    

                                 5

#include <stdio.h>
/**
 * main - main function
 * Description:printing digit number
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}



                               6


#include <stdio.h>

/**
 * main - main function
 * Description:printinggg single digits numbers of base 10 starting from 01
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}




                       7


#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);

	putchar('\n');

	return (0);
}


                                  8




#include <stdio.h>
/**
 * main - main Function
 *
 * Return: 0
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


                           9


#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
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




                                10


#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

         
                                     101


#include <stdio.h>

/**
 * main - Function
 *
 * Return: Always 0.
 */
int main(void)
{
	int d1, d2, d3

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = d1 + 1; d2 < 9; d2++)
		{
			for (d3 = d2 + 1; d3 < 10; d3++)
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((d3 % 10) + '0');

				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}






                             102



#include <stdio.h>

/**
 * main - Printing combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nb1, nb2;

	for (nb1 = 0; nb1 <= 98; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 <= 99; nb2++)
		{
			putchar((nb1 / 10) + '0');
			putchar((nb1 % 10) + '0');
			putchar(' ');
			putchar((nb2 / 10) + '0');
			putchar((nb2 % 10) + '0');

			if (nb1 == 98 && nb2 == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}



