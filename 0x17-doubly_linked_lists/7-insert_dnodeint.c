#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: a head pointer pointing to the first node
 *@idx: index poistion
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *travel = NULL, *current = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	travel = *h;
	while (travel)
	{
		count++;
		if (count == idx)
			break;
		travel = travel->next;
	}
	if (travel == NULL)
		return (NULL);
	else
	{
		current = travel->next;
		travel->next = new_node;
		current->prev = new_node;
		new_node->next = current;
		new_node->prev = travel;
	}
	return (new_node);
}
