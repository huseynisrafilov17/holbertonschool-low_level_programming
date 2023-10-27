/**
 * _memcpy - copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: times.
 * Return: dest pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
