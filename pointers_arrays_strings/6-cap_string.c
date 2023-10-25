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
		if (i == 0 && c >= 97 && c <= 122)
		{
			*(zor + i) = c - 32;
		}
		else if ((p == ' ' || p == '\t' || p == '\n') && c >= 97 && c <= 122)
		{
			*(zor + i) = c - 32;
		}
		else if (p == '!' || p == '?' || p == '"' && c >= 97 && c <= 122)
		{
			*(zor + i) = c - 32;
		}
		else if (p == '.' || p == '{' || p == '}' && c >= 97 && c <= 122)
		{
			*(zor + i) = c - 32;
		}
		else if (p == ',' || p == '(' || p == ')' && c >= 97 && c <= 122)
                {
                        *(zor + i) = c - 32;
                }
		else if (p == ';' && c >= 97 && c <= 122)
		{
			*(zor + i) = c - 32;
		}
		i++;
	}
	return (zor);
}
