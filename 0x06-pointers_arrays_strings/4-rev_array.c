#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: character to check
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int j;

	int k;

	for (j = 0; j < (n / 2); j++)
	{
		k = a[j];

		a[j] = a[n - j - 1];

		a[n - j - 1] = k;
	}
}
