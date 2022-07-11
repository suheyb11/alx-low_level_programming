#include <main.h>

/**
 * _puts - prints to string
 * @str: apointeto an int that be changed
 *
 * Return: void which means our answer is cotrrect
 */

void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

