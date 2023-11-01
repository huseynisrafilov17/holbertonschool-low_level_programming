#include <string.h>
int palindrome_check(int i, char *s)
{
	int len = strlen(s);
	if (*(s + i) == *(s - len - i - 1) && i != (len + 1) / 2 )
		return (palindrome_check(i + 1, *s));
	else if (*(s + i) != *(s - len - i - 1))
		return (0);
	if (*(s + i) == *(s - len - i - 1) && i == (len + 1) / 2 )
		return (1);
}
int is_palindrome(char *s)
{
	return (palindrome_check(0, *s));
}
