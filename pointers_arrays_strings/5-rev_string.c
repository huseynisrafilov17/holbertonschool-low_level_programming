/**
 * rev_string - reverses string
 * @s: char.
 */
void rev_string(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	s--;
	for (; c > 0; c--)
	{
		*s = *(s - c);
		s--;
	}
}
