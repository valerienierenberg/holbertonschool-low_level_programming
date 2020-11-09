#include "holberton.h"

/**
* read_textfile - Function that reads a text file and
* prints it to the POSIX standard output.
* @filename: name of file to be read
* @letters: letters to be read and returned
* Return: actual number of letters it could read and print
* or 0 if the file cannot be read or opened, 0 if filename is NULL
* 0 if write fails or does not write the expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t rd;
ssize_t wr;

if (filename == NULL)
	return (0);

/* READ */
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buf = malloc(sizeof(char) * letters);

if (buf == NULL)
	return (0);

rd = read(fd, buf, letters);

if (rd == -1)
{
	free(buf);
	return (0);
}

/*WRITE*/
wr = write(STDOUT_FILENO, buf, rd);

if (wr == -1)
{
	free(buf);
	return (0);
}
free(buf);
close(fd);
return (wr);
}

