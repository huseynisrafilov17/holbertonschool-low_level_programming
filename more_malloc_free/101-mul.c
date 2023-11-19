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
	char *another_ptr = result + length;
	int i = 0, j = 0, l1 = strlen(s1) - 1, l2 = strlen(s2) - 1;
	int carry = 0, a;

	for (i = l1; i >= 0; i--)
		for (j = l2; j >=0; j--)
		{
			if (result[length - i - j] == '\0')
				result[length - i - j] = '0';
			a = carry + (atoi(s1 + i) * atoi(s2 + j)) + atoi(result + length - i - j);
			result[length - i - j] = a % 10 + 48;
			carry = a / 10;
			another_ptr--;
		}
	if (carry != 0)
		(another_ptr - 1) = carry + 48;
	else
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
	if (argv[1][0] == 0 || argv[2][0] == 0)
	{
		printf("0");
		return (0);
	}
	s = calloc(strlen(argv[1]) + strlen(argv[2]) + 1, sizeof(char));
	if (s == NULL)
	{
		printf("Failed");
		return (1);
	}
	multiplication(argv[1], argv[2], s, strlen(argv[1]) + strlen(argv[2]) - 1);
	printf("%s\n", s);
	free(s);
	return (0);
}
