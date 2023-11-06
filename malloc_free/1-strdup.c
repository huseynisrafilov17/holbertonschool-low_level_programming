#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates string.
 * @str: string.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length;
	
	length= strlen(str);
	if (str == NULL)
		return (NULL);
	dup = malloc(length * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
