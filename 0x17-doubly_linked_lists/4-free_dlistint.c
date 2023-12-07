#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t
 *@head: a head pointer pointing to the first node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *travel;

	travel = head;
	while (travel)
	{
		travel = travel->next;
		free(head);
		head = travel;
	}
}
