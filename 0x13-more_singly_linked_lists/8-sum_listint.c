#include "lists.h"
/**
 *sum_listint - sums all the data
 *@head: address of head pointer that points to first node
 *Return: sum of the numbers
 *0 if no data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *check;

	sum = 0;

	check = head;
	while (check != NULL)
	{
		sum += check->n;
		check = check->next;
	}
	return (sum);
}
