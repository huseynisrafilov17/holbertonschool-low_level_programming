#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
int create_file(const char *filename, char *text_content)
{
	int fd, n, len;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	n = write(fd, text_content, len);
	if (fd == -1 || n == -1)
		return (-1);
	return (1);
}
