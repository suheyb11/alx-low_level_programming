#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
<<<<<<< HEAD
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + '0');
		        _putchar((y % 10) + '0');
		}
		_putchar('\n');
=======
		for (y = 0; y < 14; y++)
			_putchar(y + '0');
>>>>>>> 0d4afd6161e32b15b2d2cc795bf39da5b82712d5
	}
	
}
