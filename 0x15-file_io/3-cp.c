#include "main.h"

/**
 * error_file - checks if files can be opened.
 * @file_from: source file descriptor.
 * @file_to: destination file descriptor.
 * @argv: command line arguments.
 *
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argc[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprint(STDERR_FILENO, "Error: Cann't write to %s/n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy the content of one file to another.
 * @argc: number of arguments.
 * @argv: command line arguments.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(in argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprint(STERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprint(STDW\ERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
