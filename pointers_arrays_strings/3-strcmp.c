/**
 * _strcmp - compares two strings.
 * @s1: char.
 * @s2: char.
 * Return: comparison result.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)*s1 - (int)*s2);
}
