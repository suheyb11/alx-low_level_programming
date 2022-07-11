#include "main.h"

/*
 * reset_to_98 -> is return the pointer
 */
void reset_to_98(int *n)
{
	printf("n=%d\n", n);
	*n = 402;
	printf("n=%d\n", n);
	_putchar('\n');
}
