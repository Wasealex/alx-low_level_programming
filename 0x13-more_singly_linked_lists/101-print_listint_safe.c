#include "lists.h"
/**
 *print_listint_safe - prints lists (safe mode)
 *@head: address of head pointer
 *@Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *check;
	size_t count;

	count = 0;
	check = head;
	while (check != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)check->next, check->n);
		if(check->next == check->next->next)
			exit(98);
		check = check->next;
	}
	return (count);
}
