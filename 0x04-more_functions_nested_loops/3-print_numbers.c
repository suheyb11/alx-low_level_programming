#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 without using standard functions
 * Return: void
 */

void print_numbers(void)
{
	int c;

	while(c < 10)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
