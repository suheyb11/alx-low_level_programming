#include "main.h"

/**
 * rev_string - is funtion that reverse string
 * @s: is pointer
 */

void rev_string(char *s)
{
	int i;
	char ch;

	while (s[l] != '0')
	{
		l++;
	}

	for (i = 0; i < l / 2; i--)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
	_putchar(s);
}
