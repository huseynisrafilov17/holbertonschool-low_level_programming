/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: length of the given array.
 */
void reverse_array(int *a, int n)
{
	int b[n];
	int i;
	i = 0;

	while (i < n)
	{
		*(a + i) = b[i];
		i++;
	}
	while (i >= 0)
	{
		*a = b[i];
		i--;
		a++;
	}
}
