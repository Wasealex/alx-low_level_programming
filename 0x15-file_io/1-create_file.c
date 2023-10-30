#include "main.h"
/**
 *create_file - create a file named filename
 *@filename: name of the file
 *@text_content: a null terminated string
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd0, fd2;

	if (filename == NULL)
		return (-1);
	fd0 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd2 = write(fd0, text_content, strlen(text_content));
	if (fd2 == -1 || fd0 == -1)
		return (-1);
	close(fd0);
	return (0);
}
