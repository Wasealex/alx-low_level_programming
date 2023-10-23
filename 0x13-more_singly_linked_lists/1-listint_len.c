#include "lists.h"
/**
 *listint_len - prints number of elements(nodes)
 *@h: head pointer pointing to first element
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *tmp;

	tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
