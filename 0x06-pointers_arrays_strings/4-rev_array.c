#include "main.h"

/**
 * reverse_array - > reverse_array is funtion
 * @a: is one ormn
 * @n: teo prm another
 */
void reverse_array(int *a, int n)
{
	int high, temp, low;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}								}
}
