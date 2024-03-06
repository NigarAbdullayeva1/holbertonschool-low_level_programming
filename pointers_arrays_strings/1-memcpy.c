#include "main.h"
/**
 * _memcpy -  function that copies memory area.
 * @dest: memory area dest
 * @src: memory area src
 * @n:  function copies n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
