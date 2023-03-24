#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: the nuber to be checked
 * Return: 1 for a character which is a dogit or 0 for others
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

