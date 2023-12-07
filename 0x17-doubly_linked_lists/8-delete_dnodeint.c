#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at index index
 *@head: a head pointer pointing to the first node
 *@index: index that should be deleted starts from 0
 *Return: 1 if succeed, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *travel;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	travel = *head;
	if (index == 0)
	{
		*head = travel->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(travel);
		return (1);
	}
	while (travel && count < index)
	{
		count++;
		travel = travel->next;
	}
	if (travel == NULL)
		return (-1);
	if (travel->prev != NULL)
	{
		travel->prev->next = travel->next;
	}
	if (travel->next != NULL)
	{
		travel->next->prev = travel->prev;
	}
	free(travel);
	return (1);
}
