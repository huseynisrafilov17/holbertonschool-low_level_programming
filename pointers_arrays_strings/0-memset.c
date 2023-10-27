/**
 * _memset - fills memory with a constant byte.
 * @s: string.
 * @b: byte.
 * @n: times.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
	}
	return (s);
}
