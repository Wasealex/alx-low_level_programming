#include "lists.h"
/**
 *reverse_listint - reversing a list
 *@head: head pointer pointing to the first node of the list
 *Return: pointer of the first node after reversed(new head);
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
