#include <stdio.h>
#include <string.h>
/**
 * add_part1 - part 1 of my code.
 * @n1: string number 1.
 * @n2: string number 2.
 * @r: result
 * Return: carry.
 */
int add_part1(char *n1, char *n2, char *r)
{
	int n_1, n_2, i, size1, size2, temp = 0;

	size1 = strlen(n1) - 1;
	size2 = strlen(n2) - 1;
	i = (size1 > size2) ? size1 : size2;
	while ((size1 >= size2 && size2 >= 0) || (size2 >= size1 && size1 >= 0))
	{
		n_1 = (int)*(n1 + size1) - 48;
		n_2 = (int)*(n2 + size2) - 48;
		*(r + i) = (n_1 + n_2 + temp) % 10 + 48;
		temp = (n_1 + n_2 + temp) / 10;
		size1--;
		size2--;
		i--;
	}

	for (; size1 >= 0 || size2 >= 0;)
	{
		if (size1 >= 0)
		{
			n_1 = (int)*(n1 + size1) - 48;
			*(r + i) = (n_1 + temp) % 10 + 48;
			temp = (n_1 + temp) / 10;
			size1--;
			i--;
		}
		else if (size2 >= 0)
		{
			n_2 = (int)*(n2 + size2) - 48;
			*(r + i) = (n_2 + temp) % 10 + 48;
			temp = (n_2 + temp) / 10;
			size2--;
			i--;
		}
	}
	return (temp);

}
/**
 * infinite_add - string adding.
 * @n1: string number 1.
 * @n2: string number 2.
 * @r: result.
 * Return: result.
 */
char *infinite_add(char *n1, char *n2, char *r)
{
	int i, temp;

	temp = add_part1(n1, n2, r);
	else if (temp > 0)
	{
		i = strlen(r) - 1;
		*(r + i + 3) = 0;
		while (i >= 0)
		{
			if (*(r + i) >= '0' && *(r + i) <= '9')
				*(r + i + 1) = *(r + i);
			i--;
		}
		*r = temp + '0';
	}
	return (r);
}
int main(int argc, void *argv[])
{
	int l = 0, s1_true = 1, s2_true = 1;
	char *s;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	while (argv[1][l] != '\0')
	{
		if (argv[1][l] < 48 || argv[1][l] > 57)
			s1_true = 0;
		l++;
	}
	l = 0;
	while (argv[2][l] != '\0')
        {
		if (argv[2][l] < 48 || argv[2][l] > 57)
			s2_true = 0;
		l++;
        }
	if (s1_true == 1 && s2_true == 1)
		s = infinite_add(argv[1], argv[2], s);
	else
	{
		printf("Error\n");
		exit(98);
	}
	printf("%s\n", s);
	return (0);
}
