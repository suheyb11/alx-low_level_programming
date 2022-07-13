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
	strcat(dest, src, n);
	return (dest);
}
