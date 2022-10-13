#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Getting the sum of all arguments passed
 * @n: first parameter
 * @...: varied number of arguments passed
 *
 * Return: sum on success
 * otherwise, -1 or errno set appropriately
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end ap;

	return (sum);
}
