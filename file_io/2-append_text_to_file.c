#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - appends a text to a file.
 * @filename: file name.
 * @text_content: text content.
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, len;

	fd = open(filename, O_WR | O_APPEND);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	n = write(fd, text_content, len);
	if (fd == -1 || n == -1)
		return (-1);
	return (1);
}
