#include <stdio.h>

/**
 * main - Entry point
 * @argc: Total number of argument
 * @argv: Arguments received
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for (i = 0, i < argc, i++)
		{
			printf("%s\n", argv(i));
		}
	}
	printf("\n")
	return (0);
}
