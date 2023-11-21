#include <stdlib.h>
/**
 * array_iterator - iterates in array
 * @size: size of array.
 * @action: action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
		for (; i < size; i++)
			(*action)(array[i]);
}
