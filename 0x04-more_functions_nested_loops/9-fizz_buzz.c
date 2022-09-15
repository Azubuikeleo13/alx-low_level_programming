#include "main.h"

#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the numbers from 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiples of five Buzz,
 * and for multiples of both three and five, FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 15 == 0)

			printf("FizzBuzz");

		else if (j % 3 == 0)

			printf("Fizz");

		else if (j % 5 == 0)

			printf("Buzz");

		else

			printf("%i", j);

		if (j < 100)

			printf(" ");

	}

	printf("\n");

	return (0);
}
