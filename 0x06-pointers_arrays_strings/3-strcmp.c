#include "main.h"

/**
 * _strcmp - > is funtion that comp
 * @s1: is one prm
 * @s2: is seconf prm
 */
int _strcmp(char *s1, char *s2)
{
	int f, i;

	f = 0;
	for (i = 0;s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] = s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		_putchar("not same");
}

