#include "main.h"

/**
 * puts2 -> puts2 funtion
 * @str: str prameter
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; i++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
