#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long div = 2;

	unsigned long n = 612852475143;

	while (div < n)
	{

		if (n % div == 0)
		{

			n /= div;

			div = 2;

		}

		else

			div++;

	}

	printf("%lu\n", n);

	return (0);
}
