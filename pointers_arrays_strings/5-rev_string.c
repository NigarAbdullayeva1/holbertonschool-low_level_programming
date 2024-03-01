#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse
 *@s: string
 * strlen - counts length of string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;


	while (j <= i / 2)
	{
		k = s[j];
		s[j] = s[i - j];
		s[i - j] = k;
		j++;
	}
}
