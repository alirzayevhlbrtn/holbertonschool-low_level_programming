#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * create_file - gay
 * @filename: name of file
 * @text_content: text to write
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[l])
		l++;
	write(fd, text_content, l);
	close(fd);
	return (1);
}
