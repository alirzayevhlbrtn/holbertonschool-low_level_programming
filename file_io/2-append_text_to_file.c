#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - gay
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, strlen(text_content));
	if (file == -1 || wr == -1)
		return (-1);
	return (1);
}
