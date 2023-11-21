#include <stdlib.h>
/**
 * int_index - returns result index of comparison.
 * @array: array.
 * @size: size of array.
 * @cmp: function.
 * Return: either index or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (; i < size; i++)
			if ((*cmp)(array[i]))
				return (i);
	}
	return (-1);
}
