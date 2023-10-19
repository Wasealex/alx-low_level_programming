#include "lists.h"
/**
 *free_list - frees each node from memory sequentially
 *@head: head pointer pointing to the first node
 *Return: 0 if successful
 */
void free_list(list_t *head)
{
	list_t *check;
	list_t *temp;

	if (head == NULL)
		return;
	check = head;
	while (check != NULL)
	{
		temp = check->next;
		free(check->str);
		free(check);
		check = temp;
	}
}
