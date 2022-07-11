#include "main.h"
#include <string.h>

/**
 * rev_string - is funtion that reverse string
 * @s: is pointer
 */

void rev_string(char *s)
{
	int l;

	l = strlen(s);
	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
