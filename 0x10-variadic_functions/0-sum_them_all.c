#include "variadic_function.h"

/**
 * sum_them_all - Getting the sum of all arguments passed
 * @n: first parameter
 * @...: varied number of arguments passed
 *
 * Return: 0 on success
 * otherwise, -1 or errno set appropriately
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end ap;
	return (sum);
}
