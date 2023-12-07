#include "lists.h"
/**
 *print_dlistint - prints all the elements of a 'dlistint_t' list
 *@h: address of a head pointer pointing to the first node
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = NULL;
	current = h;
        while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
