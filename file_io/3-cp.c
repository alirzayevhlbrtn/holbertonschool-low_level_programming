#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * copier - gay
 * @file_from: source f
 * @file_to: destination f
 */
void copier(char *file_from, char *file_to)
{
	int fd1, fd2, r = 1, w, c;
	char *buff = malloc(1024);

	fd2 = open(file_from, O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while (r > 0)
	{
		r = read(fd2, buff, 1024);
		w = write(fd1, buff, r);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (fd1 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	c = close(fd1);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	free(buff);
}
/**
 * main - gay
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *filef, *filet;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filef = argv[1];
	filet = argv[2];
	copier(filef, filet);
	return (0);
}
