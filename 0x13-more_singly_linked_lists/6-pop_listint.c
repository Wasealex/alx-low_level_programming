#include "lists.h"
/**
 *pop_listint - deletes the first element from a list
 *@head: a head pointer pointing to the first node
 *Return: the fisrt element of the data before it was deleted???
 *0 if no element
 */
int pop_listint(listint_t **head)
{
	int first_data;
	listint_t *temp;
	listint_t *transfer;

	if (head == NULL)
		return (0);
	temp = *head;
	first_data = temp->n;
	transfer = temp->next;
	free(*head);
	*head = transfer;
	return (first_data);
}
