#include "main.h"

/**
 * _strlen - length of string
 * @s: is variable that counts
 * Return: answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
