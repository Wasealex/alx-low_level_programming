#include "lists.h"
/**
 *free_listint - frees from memory by deleting
 *@head: address of head pointer that points to first of the element
 *
 *Return: 0 if successful
 */
void free_listint(listint_t *head)
{
	listint_t *check;
	listint_t *temp;

	if (head == NULL)
		return;

	check = head;

	while (check != NULL)
	{
		temp = check->next;
		free(check);
		check = temp;
	}
}
