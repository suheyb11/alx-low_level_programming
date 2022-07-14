#include "main.h"

/**
 * reverse_array - > reverse_array is funtion
 * @a: is one ormn
 * @n: teo prm another
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] =  a[n - x - 1];
		a[n - x - 1] = y;
	}
}
