/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: length of the given array.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	i = n - 1;
	j = 0;
	while (i >= 0)
	{
		temp = *a;
		*(a + j) = *(a + i);
		j++;
		i--
	}
}
