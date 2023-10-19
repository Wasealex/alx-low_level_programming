#include "lists.h"
/**
 *print_list - prints all elements of list_t
 *@h: head pointer pointing to first node of lits_t
 *
 *Return: number of node
 */
size_t print_list(const list_t *h)
{
	/*list_t contains 2 data(1- 'str' & 2- 'len') and 1 pointer called 'next'*/
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		if ((tmp->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%ld] %s\n", strlen(tmp->str), tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
