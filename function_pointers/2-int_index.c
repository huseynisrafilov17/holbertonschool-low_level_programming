int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
			if ((*cmp)(array[i]))
				return (i);
		return (-1);
	}
}
