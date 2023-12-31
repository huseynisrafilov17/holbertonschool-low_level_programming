#include <stdlib.h>
/**
 * strtow - slices string.
 * @str: string.
 * Return: pointer.
 */
char **strtow(char *str)
{
	int i = 1, word_count = 0, length = 0, here = 0;
	char **s;

	for (; str[i - 1] != '\0'; i++)
		if ((str[i] == 32 || str[i] == '\0') && str[i - 1] != 32)
			word_count++;
	if (word_count == 0)
		return (NULL);
	s = (char **)malloc((word_count + 1) * sizeof(char *));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			length++;
		else if (str[i] == 32 && length != 0)
		{
			s[here] = (char *)malloc(length * sizeof(char) + 1);
			here++;
			length = 0;
		}
	}
	if (length != 0)
		s[here] = (char *)malloc(length * sizeof(char) + 1);
	here = length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			s[here][length] = str[i];
			length++;
		}
		else if (str[i] == 32 && length != 0)
		{
			s[here][length] = '\0';
			here++;
			length = 0;
		}
	}
	if (length != 0)
		s[here][length] = '\0';
	return (s);
}
