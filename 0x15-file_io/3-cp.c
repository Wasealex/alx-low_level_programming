#include "main.h"
/**
 *main - entry point, cp file_from file_to
 *@argc: number of arguments
 *@argv: vector of arguments
 *Return: 97 if arguments not correct
 *98 if file_from doesnt exist or can not be opened
 *99 if file_to fails
 *100 if close file fails
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fdfrom, fdto;
	char buffer[1024];
	ssize_t reads, writes;

	if (argc != 3)
	{
		puts("Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fdfrom = open(file_from, O_RDONLY);
	fdto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((reads = read(fdfrom, buffer, 1024)) > 0)
	{
		writes = write(fdto, buffer, reads);
		if (writes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (reads == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
	}
	return (0);
}
