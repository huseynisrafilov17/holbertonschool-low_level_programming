#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, here = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length = length + strlen(av[i]) + 1;
	s = (char *)malloc(length * strlen(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= strlen(av[i]); j++)
		{
			if (j < strlen(av[i]))
				s[here] = *av[i][j];
			else
				s[here] = '\n';
			here++;
		}
	}
	return(s);
}
