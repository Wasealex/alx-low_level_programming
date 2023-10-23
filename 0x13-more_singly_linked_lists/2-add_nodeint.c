#include "lists.h"
/**
 *add_nodeint - insert a list in the begging
 *@head: head pointer pointing to the first element of list
 *@n: data that is inserted
 *Return: address of the new added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
