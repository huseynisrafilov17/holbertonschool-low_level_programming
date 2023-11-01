#include <string.h>
/**
 * palindrome_check - returns 1 if a string is a palindrome and 0 if not.
 * @i: integer.
 * @s: string.
 * Return: 0 or 1.
 */
int palindrome_check(int i, char *s)
{
	int len = strlen(s);

	if(*(s + i) == *(s + len - i - 1) && i != (len + 1) / 2 )
		return (palindrome_check(i + 1, s));
	else if(*(s + i) == *(s + len - i - 1) && i == (len + 1) / 2 )
		return (1);
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	return (palindrome_check(0, s));
}
