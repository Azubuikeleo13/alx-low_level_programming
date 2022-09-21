#include "main.h"

/**
 * * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0;

	int k = 0;

	while (dest[m] != '\0')

		m++;

	while (src[k] != src[n])
	{
		dest[m] = src[k];

		m++;

		k++;
	}

	dest[m] = '\0';

	return (dest);
}
