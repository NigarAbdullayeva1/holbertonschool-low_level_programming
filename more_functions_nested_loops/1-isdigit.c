#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - check if digit.
 *@c:charecter
 *
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
