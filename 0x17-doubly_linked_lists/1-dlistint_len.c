#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked list
 *@h: address of head pointer pointing to the first node
 *Return: number of elements (node)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = NULL;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
