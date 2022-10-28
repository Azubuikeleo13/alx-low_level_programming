#include "main.h"

/**
 * get_endianness - Function to determine Endianness of a Machine
 *
 * Return: 1 if Little Endian
 * 0 if Big Endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);

	else
		return (0);
}
