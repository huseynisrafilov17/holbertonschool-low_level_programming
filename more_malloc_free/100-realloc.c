#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	new_ptr = malloc(new_size);
	if(new_ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size)
	{
		if (i >= old_size)
			break;
		((char *)new_ptr + i) = ((char *)old_size + i);
	}
	free(ptr);
	return (new_ptr);
}
