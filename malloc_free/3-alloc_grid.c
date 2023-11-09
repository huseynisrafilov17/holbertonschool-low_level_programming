#include <stdlib.h>
/**
 * alloc_grid - 2 dimesional array.
 * @width: width of array.
 * @height: height of array.
 * Return: pointer to grid.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
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
			while (j < i)
			{
				free(arr[j]);
				j++;
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
