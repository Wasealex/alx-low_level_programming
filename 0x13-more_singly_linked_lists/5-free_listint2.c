#include "lists.h"
/**
 *free_listint2 - frees memories from heap set by the pointers
 *@head: a head pointer pointing to the first part of node
 *Return: 0 if success
 */
void free_listint2(listint_t **head)
{
	listint_t *check;
	listint_t *temp;

	if (*head == NULL)
		return;
	check = *head;
	while (check != NULL)
	{
		temp = check->next;
		free(check);
		check = temp;
	}
	*head = NULL;
}
