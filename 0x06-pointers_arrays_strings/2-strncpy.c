#include "main.h"

/**
 * *_strncpy -  concatenates two strings
 * @dest: character to check
 * @src: character to check
 * @n: number of strings
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)

		dest[j] = src[j];

	for (; n > j; j++)

		dest[j] = '\0';

	return (dest);
}
