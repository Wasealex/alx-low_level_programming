#include "hash_tables.h"
/**
 *hash_table_get - retreive a value based on key from table ht
 *@ht: the table
 *@key: the key
 *Return: the value or NULL if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int row_number;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	row_number = key_index((const unsigned char *)key, ht->size);
	current = ht->array[row_number];
	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
