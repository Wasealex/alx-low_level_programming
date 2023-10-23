#include "lists.h"
/**
 *add_nodeint_end - adds elements at the end of the list
 *@head: header pointer points to the first element
 *@n: data to be added
 *Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *travel;

	travel = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (travel->next != NULL)
		{
			travel = travel->next;
		}
		travel->next = newnode;
	}
	return (newnode);
}
