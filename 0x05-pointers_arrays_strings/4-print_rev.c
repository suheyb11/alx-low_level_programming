#include "main.h"

/**
 * print_rev -prints string reverse
 * @s: apointer to an int  then changed
 *
 * Return: void means our data is correct
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
