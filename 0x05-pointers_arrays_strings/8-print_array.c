#include <stdio.h>

/**
<<<<<<< HEAD
 * print_array - > print_array is funtion 
 * @a: is prameter
 * @n: is prameteissbvr
=======
 * print_array - prints n elements of a given array
 * @a: int pointer parameter
 * @n: number of elements to be printed
 *
 * Return: void
>>>>>>> 2abdc4f4b28d1a64e722a18224d567c8da2332de
 */

void print_array(int *a, int n)
{
	int i = 0;

<<<<<<< HEAD
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
	        else
			printf("%d, ", *(a + i));
=======
	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
>>>>>>> 2abdc4f4b28d1a64e722a18224d567c8da2332de
	}

	printf("\n");
}
