#include "main.h"
#include <string.h>

/**
 * rev_string - is funtion that reverse string
 * @s: is pointer
 */

void rev_string(char *s)
{
	int i, n, n2;
	char tmp;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n2 = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n2];
		s[n2] = tmp;
		n2--;
	}
	_putchar('\n');
}
