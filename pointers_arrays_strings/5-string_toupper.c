/**
 * string_toupper: changes all lowercase letters of a string to uppercase.
 * @zor: string.
 * Return: all upper.
 */
char *string_toupper(char *zor)
{
	int i = 0;

	while (*(zor + i) != '\0')
	{
		if (*(zor + i) >= 97 && *(zor + i) <= 122)
		{
			*(zor + i) = (char)((int)*zor - 32);
			i++;
		}
		else
		{
			i++;
		}
	}
	return (zor);
}
