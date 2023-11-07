#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
