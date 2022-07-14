#include "main.h"

/**
 * reverse_array - > reverse_array is funtion
 * @a: is one ormn
 * @n: teo prm
 * Return: is void not crct
 */
void reverse_array(int *a, int n)
{
	int g[n];

	for (i = 0; i < n; i++)
	{
		g[n - 1 - i] = a[i];
	}
	
	for (int i = 0; i < n; i++) 
	{
		a[i] = g[i];
	}
}
