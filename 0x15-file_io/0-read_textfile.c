#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters.
 * @filename: the name of the file to be read.
 * @letters: the number of letters to be printed.
 *
 * Return: the number of letters printed; 0 if function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(file, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	n_read = read(fd, buf, letters);
	n_written = write(STDOUT_FILENO, buf, n_read);

	close(fd);
	free(buf);

	return (n_written);
}
