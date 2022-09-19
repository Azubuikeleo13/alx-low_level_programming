#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: character to check
 * @src: character to check
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (src[m] != 0)

		m++;

	for (n = 0; n <= m; n++)

		dest[n] = src[n];

	return (dest);
}
