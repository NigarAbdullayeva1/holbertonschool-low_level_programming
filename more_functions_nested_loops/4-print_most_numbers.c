#include "main.h"

/**
 * print_must_numbers - print numbers other 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar (i + '0');
	}
}
