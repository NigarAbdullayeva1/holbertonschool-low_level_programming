#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if digit.
 *
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (0);
	return (1);
}
