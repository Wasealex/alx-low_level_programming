#include "lists.h"
/**
 *list_len - to get number of elements on linked list
 *@h: head pointer that points to first element of list_t
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);
}
