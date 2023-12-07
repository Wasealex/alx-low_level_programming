#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: a head pointer pointing to the first node
 *@idx: index poistion
 *@n: data to be inserted
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *travel = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || *h == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		travel = *h;
		while (travel && count < idx - 1)
		{
			count++;
			travel = travel->next;
		}
		if (travel == NULL)
			return (NULL);
		if (travel->next == NULL)
		{
			travel->next = new_node;
			new_node->prev = travel;
		}
		else
		{
			new_node->next = travel->next;
			new_node->prev = travel;
			travel->next->prev = new_node;
			travel->next = new_node;
		}
	}
	return (new_node);
}
