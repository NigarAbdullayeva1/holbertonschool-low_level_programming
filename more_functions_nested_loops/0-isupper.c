#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - check if upper.
 * @c: charecter
 *
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
