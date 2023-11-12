#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all strings in arguments to one.
 * @ac: argument count.
 * @av: arguments
 * Return: pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, here = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length = length + strlen(av[i]) + 1;
	s = (char *)malloc(length * sizeof(char) + 1);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= (int)strlen(av[i]); j++)
		{
			if (j < (int)strlen(av[i]))
				s[here] = av[i][j];
			else
				s[here] = '\n';
			here++;
		}
	}
	s[here] = '\0';
	return (s);
}
