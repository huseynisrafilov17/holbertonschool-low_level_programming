/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: byte size.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\n')
	{
		i++;
	}
	while (j < n && *(src + j) != '\n')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
