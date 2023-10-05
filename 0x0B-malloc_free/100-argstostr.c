#include "main.h"
/**
 *argstostr - concatenate arguments
 *@ac: argument count
 *@av: argument pointer to strings
 *Return: a string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *s;

	s = malloc(sizeof(*s) * ac);
	if (s == NULL)
		return (NULL);
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s[i] = av[i][j];
	}
	return (s);
}
