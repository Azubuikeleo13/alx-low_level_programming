#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{

	int c = '0';

	int n = 'a';



	while (c <= '9') /*print 0-9*/

	{

		putchar(c);

		c++;

	}
	while (n <= 'f') /*print n to finish hexabase*/

	{

		putchar(n);

		n++;

	}

	putchar('\n');

	return (0);

}
