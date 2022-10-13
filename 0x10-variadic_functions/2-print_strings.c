#include "variadic_function.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Printing all the arguments passed to a function
 *
 * @separator: string to print after argument
 * @n: number of arguments
 * @...: passed arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strn;

	unsigned int index;

	va_start(strn, n);

	for (index = 0; index < n; index++)
	{
		if (va_arg(strn, str) == NULL)
			printf("nil");

		printf("%s", va_arg(strn, str));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strn);
}
