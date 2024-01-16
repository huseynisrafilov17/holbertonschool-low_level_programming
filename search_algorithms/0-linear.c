#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - performs linear search on array.
 * @array: array
 * @size: size of array.
 * @value: value we are searching for.
 * Return: index or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	while (i < size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
