#include "lists.h"
/**
 *insert_nodeint_at_index - inserting a data at index n
 *@head: head pointer that points to the first node of element
 *@idx: the index to be inserted
 *@n: the data to be inserted
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *check;
	unsigned int count;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	check = *head;

	count = 0;
	while (check != NULL)
	{
		if (count == idx - 1)
		{
			newnode->next = check->next;
			check->next = newnode;
			return (newnode);
		}
		count++;
		check = check->next;
	}
	return (NULL);
}
