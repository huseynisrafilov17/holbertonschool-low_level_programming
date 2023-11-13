#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string1.
 * @s2: string2.
 * @n: number of chars.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1, len2;
	char *s;
	char empty_string[] = "";

	if (s1 == NULL)
		s1 = empty_string;
	if (s2 == NULL)
		s2 = empty_string;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if ((int)n > len2)
		n = len2;
	s = malloc((len1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 + (int)n; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}
