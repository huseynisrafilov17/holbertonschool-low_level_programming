/**
 * cap_string - capitalizes all words of a string.
 * @zor: string.
 * Return: same string.
 */
char *cap_string(char *zor)
{
	int i;
	char c, p;

	i = 0;
	while (*(zor + i) != '\0')
	{
		c = *(zor + i)
		p = *(zor + i - 1)
		if (i == 0 && *(zor + i) >= 97 && *(zor + i) <= 122)
		{
			*(zor + i) = c - 32;
		}
		else if (p == ' ' || p == '\t' || p == '\n' || p == ',' || p == ';')
		{
			*(zor + i) = c - 32;
		}
		else if (p == '!' || p == '?' || p == '"' || p == '(' || p == ')')
		{
			*(zor + i) = c - 32;
		}
		else if (p == '.' || p == '{' || p == '}')
		{
			*(zor + i) = c - 32;
		}
	}
	return (zor);
}
