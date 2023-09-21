#include "main.h"
/**
 *infinite_add - add 2 intigers
 *@n1: first intiger
 *@n2: second intiger
 *@r: result
 *@sizer_r: buffer size
 *Return: pointer to char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++)
	{
		if (size_r >= 0)
			r[i] = n1[i] + n2[i];
	}
	return (r)
}
