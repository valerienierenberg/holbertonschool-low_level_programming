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
* append_text_to_file-  returns the length of a string
* @filename: name of file to append to
* @text_content: NULL terminated string to add to the end
* of a file
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int wr;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
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
close(fd);

if (wr == -1)
return (-1);

return (1);
}
