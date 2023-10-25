/**
 * rot13 - encodes a string using rot13.
 * @zor: string.
 * Return: string.
 */
char *rot13(char *zor)
{
	char c;
	int i = 0;

	while (*(zor + i) != '\0')
	{
		c = *(zor + i);
		for (; (c >= 65 && c <= 90) || (c >= 97 && c <= 122);)
		{
			if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
			{
				*(zor + i) = c + 26;
			}
			*(zor + i) = c - 13;
			break;
		}
		i++;
	}
	return (zor);
}
