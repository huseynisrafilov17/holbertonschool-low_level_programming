#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isint(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 48 || s[i] > 57)
			return (0);
	return (1);
}
void multiplication(char *s1, char *s2, char *result,int length)
{
	char *another_ptr = result + length, *inside_ptr;
	int i, j, l1 = strlen(s1) - 1, l2 = strlen(s2) - 1;
	int carry = 0, a;

	for (i = l1; i >= 0; i--)
	{
		inside_ptr = another_ptr;
		for (j = l2; j >=0; j--)
		{
			if (*inside_ptr < 48 || *inside_ptr > 57)
				*inside_ptr = '0';
			a = carry + ((int)s1[i] - 48)* ((int)s2[j] - 48) + (int)*inside_ptr - 48;
			*inside_ptr = a % 10 + 48;
			carry = a / 10;
			inside_ptr--;
		}
		another_ptr--;
	}
	if (carry != 0)
		*inside_ptr = carry + 48;
	while (!(result[0] >= 48 && result[0] <= 57))
		for (i = 0; i <= length; i++)
			result[i] = result[i + 1];
}
int main(int argc, char *argv[])
{
	char *s;

	if (argc != 3 || isint(argv[1]) != 1 || isint(argv[2]) != 1)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	s = malloc(strlen(argv[1]) + strlen(argv[2]) + 1);
	s[strlen(argv[1]) + strlen(argv[2])] = '\0';
	if (s == NULL)
	{
		free(s);
		printf("Failed");
		return (1);
	}
	multiplication(argv[1], argv[2], s, strlen(argv[1]) + strlen(argv[2]) - 1);
	printf("%s\n", s);
	free(s);
	return (0);
}
