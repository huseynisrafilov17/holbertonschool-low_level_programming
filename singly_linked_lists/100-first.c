#include <stdio.h>

void printbefore(void) __attribute__ ((constructor));
/**
 * printbefore - prints something before main function is executed.
 */
void printbefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
