#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * read_textfile - gay
 * @filename: name of file
 * @letters: number of letters
 * Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff = malloc(letters);

	if (!filename || !buff)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1 || w != r)
		return (0);
	close(fd);
	return (w);
}
