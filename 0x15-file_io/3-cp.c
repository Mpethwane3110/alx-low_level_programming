#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_buffer - program that copies the content of a file to another
  *@file:
  *Return:
  *close_file - closes file descriptor
  *@fd: file descriptor
  *main - copies file content to another
  *@argc: arguments in the program
  *@argv: array of pointers to the argument
  *Return: 0 if successful
  *Description:incorrect count - exit(97)
  *file_from cannot ne read or does not exist exit (98)
  *file_to file could not be created or wr exit (99)
  *file_to or file_from cannot be closed exit (100)
  **/

char *create_buffer(char *file);
void close_file(int fd);

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprint(STDERR_FILENO, "ERROR, cant write to %s\n", file)
			exit(99);
	}
	else
		return (buffer);
}
int main(int argc, char *argv[])
{
	int from, to, read, write;
	char *buffer;

	if (argc != 3)
		{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	close_file(from);
	close_file(to);
	free(buffer);

	return (0);
}

void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if
		(cl == -1);
	{
		dprint(STDERR_FILENO, "ERROR cant close fd %d\n", fd);
		exit 100;
	}
}

