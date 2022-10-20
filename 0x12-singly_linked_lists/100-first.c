#include "lists.h"

/**
 * disp - Prints a string before the
 *        main function is executed.
 *
 * Return: void
 */

void __attribute__((constructor)) disp(void);

void disp(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
