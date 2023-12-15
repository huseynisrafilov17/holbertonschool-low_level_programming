#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/**
 * needed - creates a file and writes into it.
 * @filename: file name.
 * @text_content: text content.
 */
void needed(const char *filename, char *text_content)
{
	int fd, n, len, close_val;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	n = write(fd, text_content, len);
	close_val = close(fd);
	if (fd == -1 || n == -1)
	{
		fprintf(stderr, "Error: Can't write to %s", filename);
		exit(99);
	}
	if (close_val == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: arguments array.
 * Return: 1 on success.
 */
int main(int argc, char *argv[])
{
	int fd, close_val;
	char buff[1024];

	if (argc != 3)
		exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	while (read(fd, buff, 1024) != -1)
		needed(argv[2], buff);
	close_val = close(fd);
	if (close_val == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (1);
}
