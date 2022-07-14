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
	while( ( s1 != '\0' && s2 != '\0' ) && s1 == s2 )
	{
		s1++;
		s2++;
	}
	
	if(s1 == s2)
	{
		return 0; // strings are identical
	}

<<<<<<< HEAD
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	
	if (s1[i] == s2[i])
=======
	else
>>>>>>> 2e76daa4d0208473b70a986659c119dfd6b109f5
	{
		return s1 - s2;
	}
<<<<<<< HEAD
        return (s1[i] - s2[i]);
=======
>>>>>>> 2e76daa4d0208473b70a986659c119dfd6b109f5
}
