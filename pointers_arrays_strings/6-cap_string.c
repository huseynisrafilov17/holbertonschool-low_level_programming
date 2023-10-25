#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @zor: string.
 * Return: same string.
 */
char *cap_string(char *zor)
{
	int i, n;
	char c, p;

	n = strlen(zor);
	i = 0;
	while (i < n)
	{
		c = *(zor + i);
		p = *(zor + i - 1);
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
		i++;
	}
	return (zor);
}
