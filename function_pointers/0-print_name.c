#include <stdlib.h>
/**
 * print_name - prints name.
 * @name: name.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
