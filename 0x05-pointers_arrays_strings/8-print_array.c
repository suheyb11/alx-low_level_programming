#include "main.h"
#include <stdio.h>
/**
 *print_array - print_array is funtion 
 *@a: is prameter
 *@n: is prameteissbvr
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%x", a[i], ",", " ");
}
