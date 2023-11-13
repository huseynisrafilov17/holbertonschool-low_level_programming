#include <stdlib.h>
/**
 * malloc_checked - checks malloc and allocates.
 * @b: size.
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
