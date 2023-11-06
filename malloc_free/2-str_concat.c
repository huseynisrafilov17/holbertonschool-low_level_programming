#include <stdlib.h>
#include <string.h>
/**
 * str_concat - 
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, s1_len, s2_len;

	if (s1 == NULL)
		*s1 = "";
	s1_len = strlen(s1);
	if (s2 == NULL)
		*s2 = "";
	s2_len = strlen(s2);
	new = malloc(s1_len + s2_len + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < s1_len + s2_len; i++)
	{
		if (i < s1_len)
			new[i] = s1[i];
		else
			new[i] = s2[i - s1_len];
	}
	new[i] = '\0';
	return (new);
}
