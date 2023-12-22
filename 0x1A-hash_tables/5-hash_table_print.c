#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table ht
 *@ht: the hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first_pair != 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_pair = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
