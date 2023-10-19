#include "lists.h"
/**
 *add_node_end - adds list at the end of node
 *@head: address of head pointer pointing to the first node
 *@str: a string that needs to be duplicated
 *Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first;
	list_t *last;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	if (str == NULL)
	{
		first->len = 0;
	}
	else
	{
		first->str = strdup(str);
		if (first->str == NULL)
		{
			free(first);
			return (NULL);
		}
		first->len = strlen(first->str);
	}
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = first;
	}
	return (first);
}
