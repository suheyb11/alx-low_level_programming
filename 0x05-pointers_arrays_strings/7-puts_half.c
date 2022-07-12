#include "main.h"

/**
 * puts_half -> puts_half is funtio
 * @str: is prameter
 */

void puts_half(char *str)
{
	int i, j, y;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
		y = i / 2 + 1;
	else
		y = i / 2;
	for (j = y; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
