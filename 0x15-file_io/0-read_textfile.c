#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* read_textfile - Reads a text file and prints the specified number of letters.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: The number of letters read and printed, or 0 if an error occurred.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

n_read = read(fd, buf, letters);
if (n_read == -1)
{
free(buf);
close(fd);
return (0);
}

n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (n_written);
}
