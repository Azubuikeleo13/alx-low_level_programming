#include "main.h"

/**
 * get_endianness - Function to determine Endianness of a Machine
 *
 * Return: void
 */

int get_endianness(void)
{
	int i;
	char *s;

	i = 1;
	s = (char *)&i;

	if (*s)
		return (1);
	else
		return (0);
}
