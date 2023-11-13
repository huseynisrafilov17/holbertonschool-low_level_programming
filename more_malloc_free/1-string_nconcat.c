#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *s;

	if ((int)n > (int)strlen(s2))
		n = (int)strlen(s2);
	s = malloc(((int)strlen(s1) + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (int)strlen(s1) + (int)n; i++)
	{
		if (i < (int)strlen(s1))
			s[i] = s1[i];
		else
			s[i] = s2[i];
	}
	return (s);
}
