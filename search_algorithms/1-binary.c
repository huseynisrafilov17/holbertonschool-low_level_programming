#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, m, l = 0, r = size - 1;

	while (array && l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != l)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] > value)
			r = m - 1;
		else if (array[m] == value)
			return (m);
		else
			l = m + 1;
	}
	return (-1);
}
