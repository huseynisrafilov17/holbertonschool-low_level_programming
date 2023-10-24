/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: length of the given array.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j, half_n;
	if (n % 2 == 0)
	{
		half_n = n / 2;
	}
	else
	{
		half_n = (n + 1) / 2;
	}
	i = n - 1;
	j = 0;
	while (i >= half_n)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
		j++;
		i--;
	}
}
