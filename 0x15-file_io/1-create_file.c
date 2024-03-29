#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: text content to be written into the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	int nletters = 0, rwr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;
	}

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
