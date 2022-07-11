#include "main.h"

/**
 * swap_int - this funtion is swap mtwo varialble
 * @a: is pointer
 * @b: is pointer
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
