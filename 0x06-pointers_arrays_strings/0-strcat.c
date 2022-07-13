#include "main.h"
#include <string.h>

/**
 * _strcat ->  _strcat is funtion
 * @dest: is prameter
 * @src: is prameter
 * Return: is void becouse our data is correct
 */

char *_strcat(char *dest, char *src)
{
	int p, i;

	p = 0;
	while (dest[p])
		p++;
	for (i = 0; src[i] ; i++)
		dest[p++] = src[i];
	return (dest);

}
