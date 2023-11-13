#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1, len2;
	char *s;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
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
