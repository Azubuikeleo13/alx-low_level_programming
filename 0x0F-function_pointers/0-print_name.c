#include "function_pointers.h"

/**
 * print_name - Function to print a name
 *
 * @name: String to print
 * @f: Pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
