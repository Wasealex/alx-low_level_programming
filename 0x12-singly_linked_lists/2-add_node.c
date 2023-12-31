#include "lists.h"
/**
 *add_node - adds list at the begining
 *@head: address of head pointer pointing to the first node
 *@str: string which needs to be duplicated
 *Return: address of new element , NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/*list_t is a struct has 2 data(1- 'str' 2-'len) and pointer ('next)*/
	list_t *first;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	if (str == NULL)
	{
		first->str = NULL;
		first->len = 0;
	}
	else
	{
		first->str = strdup(str);
		{
			if (first->str == NULL)
			{
				free(first);
				return (NULL);
			}
			first->len = strlen(first->str);
		}
	}
	first->next = *head;

	*head = first;
	return (first);
}
