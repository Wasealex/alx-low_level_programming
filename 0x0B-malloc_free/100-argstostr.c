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
	char *s, *tmp;

	s = malloc(sizeof(*s) * 4156);
	if (s == NULL)
		return (NULL);
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		s = av[i];
		while (*s != '\0')
		{
			*tmp = *s;
			tmp++;
			s++;
		}
	}
	*tmp = '\0';
	return (s);
}
