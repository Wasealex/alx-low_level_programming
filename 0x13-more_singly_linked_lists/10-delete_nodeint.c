#include "lists.h"
/**
 *delete_nodeint_at_index - delete a node on a given index
 *@head: head pointer pointing to the first node
 *@index: index at which to be deleted
 *Return: 1 if successfull -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *check;
	listint_t *previous;

	if (*head == NULL)
		return (-1);

	check = *head;
	previous = *head;
	count = 0;
	while (check != NULL)
	{
		if (index == count)
		{
			if (previous == *head)
				*head = check->next;
			else
				previous->next = check->next;
			free(check);
			return (1);
		}
		previous = check;
		count++;
		check = check->next;
	}
	return (-1);
}
