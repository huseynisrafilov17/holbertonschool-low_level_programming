#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **arr = (int **)malloc(height * sizeof(int *));
	
	if (width <= 0 || height <= 0)
		return (NULL);
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
	for (i = 0; i < height * width; i++)
		**(arr + i) = 0;
	return (arr);
}
