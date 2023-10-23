#ifndef LISTS_H
#define LISTS_H
/*header files*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
/*typdef and struct types*/
/**
 *struct listint_s - singly linked list
 *@n: integer
 *@next: points to the next node
 *Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/*function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
#endif /*LISTS_H*/