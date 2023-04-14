#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - appends text to the end of a file.
* @filename: name of the file to append to.
* @text_content: text content to append.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, nletters = 0, rwr = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[nletters])
nletters++;

rwr = write(fd, text_content, nletters);

if (rwr == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
