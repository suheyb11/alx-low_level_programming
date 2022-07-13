#include "main.h"
#include <string.h>

/**
 * _strncat->_strncat is funtion 
 *  @dest: is prameter
 *  @src: is prameter
 *  @n: is prameter
 *  Return: is void returns the code
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}
