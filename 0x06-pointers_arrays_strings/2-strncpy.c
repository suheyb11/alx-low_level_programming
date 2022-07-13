#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy -> is funtion
 * @dest: is one prm
 * @src: is two prm
 * @n: is prmii
 * Return: is vouid 
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
