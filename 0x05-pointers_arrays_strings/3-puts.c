#include "main.h"

/**
 * _puts - prints to string
 * @str: apointeto an int that be changed
 *
 * Return: void which means our answer is cotrrect
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

