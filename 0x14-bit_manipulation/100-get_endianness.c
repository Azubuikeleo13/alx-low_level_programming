#include "main.h"

/**
 * get_endianness - Function to determine Endianness of a Machine
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;

	if (*c)
		return (1);

	else
		return (0);
}
