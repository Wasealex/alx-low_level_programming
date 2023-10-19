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

	if (str == NULL)
		return (NULL);

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	first->len = strlen(first->str);
	first->next = *head;

	*head = first;
	return (first);
}
