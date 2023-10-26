#include <string.h>
int temp = 0;
char *add_part1 (char *n1, char *n2, int *s1, int *s2, char *r)
{
	int n_1, n_2, i, size1, size2;
	size1 = *s1;
	size2 = *s2;
	i = (*s1 > *s2) ? *s1 : *s2;
	while ((*s1 >= *s2 && *s2 >= 0) || (*s2 > *s1 && *s1 >= 0))
	{
		n_1 = (int)*(n1 + size1) - 48;
		n_2 = (int)*(n2 + size2) - 48;
		*(r + i)= (n_1 + n_2 + temp) % 10 + 48;
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
			*(r + i)= (n_1 + temp) % 10 + 48;
			temp = (n_1 + temp) / 10;
			*s1 = *s1 - 1;
			i--;
		}
		else if (size2 >= 0)
		{
			n_2 = (int)*(n2 + size2) - 48;
			*(r + i)= (n_2 + temp) % 10 + 48;
			temp = (n_2 + temp) / 10;
			size2 = size2 - 1;
			i--;
		}
	}
	return (r);

}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, s1, s2;
	s1 = strlen(n1) - 1;
	s2 = strlen(n2) - 1;
	r = add_part1(n1, n2, &s1, &s2, r);
	if (temp > 0 && (int)strlen(r) >= size_r)
	{
		return (0);
	}
	else if(temp > 0)
	{
		i = strlen(r) - 1;
		while (i >= 0)
		{
			*(r + i + 1) = *(r + i);
			i--;
		}
		*r = temp + '0';
	}
	return (r);
}
