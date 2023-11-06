#include <stdlib.h>
/**
 * create_array - creates array of char, and initializes it with specific char.
 * @size: int.
 * @c: char.
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
