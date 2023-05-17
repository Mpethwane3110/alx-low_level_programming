#include "main.h"

/**
  *create_file - function that craetes a file
  *@filename : name of the file to be created
  *@text_content : NULL terminated string to add at the end
  *Return: if function fails - -1
  * create_file return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, w = 0;

	len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || -1)
		return (-1);
	close(fd);

	return (1);
}
