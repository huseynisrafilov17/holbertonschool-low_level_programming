#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/**
 * read_textfile - reads and prints what is in a file/
 * @filename: file name.
 * @letters: number of letters.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, fd;
	char *buff;

	if (filename == NULL)
		return (0);
	fd= open(filename, O_RDONLY);
	n = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, letters);
	return (n);
}
