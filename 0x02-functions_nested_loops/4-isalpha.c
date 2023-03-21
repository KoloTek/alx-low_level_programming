#include "holberton.h"

/**
 * checks for alphabetic character
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || 0(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
