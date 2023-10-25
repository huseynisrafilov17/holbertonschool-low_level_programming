#include <string.h>
/**
 * leet - encodes a string into 1337.
 * @zor: string.
 * Return: string.
 */
char *leet(char *zor)
{
	int length = strlen(zor), i = 0, j;
	char char_arr[6] = "AEOTL", low_arr[6] = "aeotl", int_array[6] = "43071";

	while (i < length)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(zor + i) == char_arr[j] || *(zor + i) == low_arr[j])
			{
				*(zor + i) = int_array[j];
			}
		}
		i++;
	}
	return (zor);
}
