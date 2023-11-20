#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints elements of dog.
 * @d: dog structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
