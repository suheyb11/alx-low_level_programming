#include "main.h"
#include <string.h>

/**
 * _strncat -> is funtion apeend to str
 * @dest: is one  prameter
 * @src: is two  prameter
 * @n: is prameter
 * Return: is void returns the code
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, i;

	p = 0;
	while (dest[p])
		p++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[p + i] = src[i];
	dest[p + i] = '\0';
	return (dest);
}
