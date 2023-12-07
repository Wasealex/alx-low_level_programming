#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of list
 *@head: address of head pointer pointing to the first node
 *@index: the nth index
 *Return: a node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			break;
		count++;
		current = current->next;
	}
	return (current);
}
