#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: array.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size + 1) * i);
		sum2 += *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d", sum1, sum2);
}
