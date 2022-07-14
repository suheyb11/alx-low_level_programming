#include "main.h"

/**
 * string_toupper - > is fiuntion tahy
 * @s: is prameter
<<<<<<< HEAD
 * Return: is void becouse our data is correct
=======
 * Return: is void becouse our data is correct 
>>>>>>> fed78403340ca2e82eecc01ba08a59e77f2c179e
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
	}
	return (s);
}
