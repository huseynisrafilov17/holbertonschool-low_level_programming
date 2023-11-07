#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr;
	
	arr = malloc(height * sizeof(int));
	if (arr == NULL)
		return (NULL)
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
