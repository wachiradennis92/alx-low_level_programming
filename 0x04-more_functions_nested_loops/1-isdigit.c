#include "main.h"

/**
 * _isdigit: Check if a character is a digit
 * @c: Character to be checked
 *
 * Return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
