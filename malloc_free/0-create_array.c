#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
