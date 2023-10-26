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
 * @size_r: size required.
 * Return: result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, temp;

	temp = add_part1(n1, n2, r);
	if ((int)strlen(r) >= size_r)
	{
		return (0);
	}
	else if (temp > 0)
	{
		i = strlen(r) - 1;
		*(r + i + 1) = 0;
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
