char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	
	while (j < n && *(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}
	if (*(src + j) == '\0')
	{
		return (dest);
	}
	return (dest);
}