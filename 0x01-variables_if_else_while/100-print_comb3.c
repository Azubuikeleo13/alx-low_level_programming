#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int t;

	int m;

	for (t = 0; t < 9; t++)
	{

		for (m = t + 1; m < 10; m++)
		{

			putchar((t % 10) + '0');

			putchar((m % 10) + '0');

			if (t == 8 && m == 9)

				continue;

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
