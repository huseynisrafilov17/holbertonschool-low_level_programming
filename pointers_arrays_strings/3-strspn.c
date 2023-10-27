/**
 * _strspn - gets the length of a prefix substring.
 * @s: from this string.
 * @accept: string to find.
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;
	while (*(s + i) != ' ' && *(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}
