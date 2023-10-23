#include "lists.h"
/**
 *get_nodeint_at_index - get a data at index of a number which starts from 0
 *@head: address of head pointer pointing to first node
 *@index: a number to get the index
 *Return: NULL if no data exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *check;

	check = head;
	count = 0;
	while (check != NULL)
	{
		if (index == count)
			return (check);
		count++;
		check = check->next;
	}
	return (NULL);
}
