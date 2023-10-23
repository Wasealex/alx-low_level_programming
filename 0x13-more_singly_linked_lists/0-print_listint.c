#include "lists.h"
/**
 *print_listint - prints content of lists
 *@h: head pointer pointing to first element of listint_s
 *
 *Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *tmp;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
