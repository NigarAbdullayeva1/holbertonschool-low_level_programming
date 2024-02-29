#include "main.h"
#include <string.h>
/**
 * _strlen - a function that finds length of the string
 * @s: input
 * Return: (a)
 */
int _strlen(char *s)
{
	int a = 0;
	
	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
