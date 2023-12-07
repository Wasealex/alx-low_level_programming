#include "lists.h"
/**
 *sum_dlistint - returns sum of all the data (n)
 *@head: an address of head pointer pointing to the first node
 *Return: int sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
