#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * read_textfile - reads and prints what is in a file/
 * @filename: file name.
 * @letters: number of letters.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, fd, err, close_val;
	char *buff;

	buff = malloc(letters * sizeof(char) + 1);
	if (buff == NULL)
		return (0);
	buff[letters] = '\0';
	fd = open(filename, O_RDONLY);
	n = read(fd, buff, letters);
	err = write(STDOUT_FILENO, buff, n);
	close_val = close(fd);
	if (fd == -1 || n == -1 || err == -1 || close_val == -1)
		return (0);
	return (n);
}
