#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: array.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size + 1) * i);
		sum2 += *(a + (size - 1) * (i + 1));
	}
	printf("%ld, %ld\n", sum1, sum2);
}
