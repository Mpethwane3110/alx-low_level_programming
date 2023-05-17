#include "main.h"
#include <stdlib.h>

/**
  *read_textfile - function reads a text file and prints it to the POSIX stdout
  *@filename : the texxt file that will be read
  *@letters : the numbers of letters that need to be raed
  *Return: the number of letters it could read & print or 0 if nothing to read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t w;
	ssize_t t;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
