#include "holberton.h"

/**
* _strlen -  returns the length of a string
* @s: string
*
* Description: returns the length of a string
* Return:i
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);

}


/**
* create_file - Function that craetes a file
* @filename: name of file to be created
* @text_content: content of the text file to be created
* (NULL terminated string to write to the file)
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd;
int wr;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

if (fd == -1)
{
close(fd);
return (-1);
}

if (text_content == NULL)
{
close(fd);
return (1);
}

wr = write(fd, text_content, _strlen(text_content));

close (fd);

if (wr == -1)
return (-1);

return (1);
}
