#include "main.h"
/**
 *append_text_to_file - append a text at end of file
 *@filename: name of the file
 *@text_content: text to be appended
 *Return: 1 if sucessful -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd0, fd2;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd0 = open(filename, O_WRONLY | O_APPEND);
	fd2 = write(fd0, text_content, strlen(text_content));

	if (fd0 == -1 || fd2 == -1)
		return (-1);

	close(fd0);
	return (1);
}
