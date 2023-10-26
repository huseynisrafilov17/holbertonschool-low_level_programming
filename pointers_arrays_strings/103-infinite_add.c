#include <string.h>
int add_part1 (char *n1, char *n2, int *s1, int *s2, char *r)
{
	int n_1, n_2, temp, i;
	temp = 0;
	i = (*s1 > *s2) ? *s1 : *s2;
	while ((*s1 >= *s2 && *s2 >= 0) || (*s2 > *s1 && *s1 >= 0))
	{
		n_1 = (int)*(n1 + s1) - 48;
		n_2 = (int)*(n2 + s2) - 48;
		*(r + i)= (n_1 + n_2 + temp) % 10 + 48;
		temp = (n_1 + n_2 + temp) / 10;
		*s1 = *s1 - 1;
		*s2 = *s2 - 1;
		i--;
	}
	for (; *s1 >= 0 || *s2 >= 0;)
	{
		if (*s1 >= 0)
		{
			n_1 = (int)*(n1 + s1) - 48;
			*(r + i)= (n_1 + temp) % 10 + 48;
			temp = (n_1 + temp) / 10;
			*s1 = *s1 - 1;
			i--;
		}
		else if (*s2 >= 0)
		{
			n_2 = (int)*(n2 + s2) - 48;
			*(r + i)= (n_2 + temp) % 10 + 48;
			temp = (n_2 + temp) / 10;
			*s2 = *s2 - 1;
			i--;
		}
	}
	return (temp);

}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n_1, n_2, temp, s1, s2;
	s1 = strlen(n1) - 1;
	s2 = strlen(n2) - 1;
	temp = add_part1(n1, n2, &s1, &s2, r);
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
