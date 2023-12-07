#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t
 *@head: a head pointer pointing to the first node
 *@n: data to be inserted
 *Return: address of the new node Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *travel = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		travel = *head;
		while (travel->next)
		{
			travel = travel->next;
		}
		travel->next = new_node;
		new_node->prev = travel;
	}
	return (new_node);
}
