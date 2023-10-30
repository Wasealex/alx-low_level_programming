#include "main.h"
/**
 *read_textfile -  reads a text file and prints it to the POSIX standard output
 *@filename: file name that is in read
 *@letters:  is the number of letters it should read and print
 *Return: actual number of letters it could read and print
 *return 0 if filename is null or fopen is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd0, fd1, fd2;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	fd0 = open(filename, O_RDONLY);
	fd1 = read(fd0, str, letters);
	fd2 = write(STDOUT_FILENO, str, fd1);
	if (fd0 == -1 || fd1 == -1 || fd2 == -1)
	{
		free(str);
		return (0);
	}
	free(str);
	return (fd2);
}
