#include "main.h"
#include <string.h>

/**
 * _strcmp - > is funtion that comp
 * @s1: is one prm
 * @s2: is seconf prm
 * Return: is void not corct
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0') && s[i] == s2[i]; i++)
	if (s1[i] == s2[i])
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
