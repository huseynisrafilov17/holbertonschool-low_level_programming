/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @zor: string.
 * Return: all upper.
 */
char *string_toupper(char *zor)
{
	int i;
	char c;

	i = 0;
	while (*(zor + i) != '\0')
	{
		c = *(zor + i);
		if (*(zor + i) >= 97 && *(zor + i) <= 122)
		{
			*(zor + i) = c - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (zor);
}
