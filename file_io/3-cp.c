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
void needed(const char *filename, int fd, char *text_content)
{
	int n, len, i = 0;

	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	while (i < len)
	{
		if (*(text_content + i) != '\0' && n != -1)
			n = write(fd, text_content + i, 1);
		else if (n == -1)
			break;
		i++;
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
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
	int fd, fd1, close_val, close_val1, re;
	char buff[1025];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	re = read(fd, buff, 1024);
	if (fd == -1 || re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (re != 0)
	{
		buff[re] = '\0';
		needed(argv[2], fd1, buff);
		re = read(fd, buff, 1024);
	}
	close_val = close(fd);
	close_val1 = close(fd1);
	if (close_val == -1 || close_val1 == -1)
	{
		if (close_val1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		else
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
