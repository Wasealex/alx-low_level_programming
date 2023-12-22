#include "hash_tables.h"
/**
 *hash_table_set - insert a key-value pair a table
 *@ht: the table that was created
 *@key: the key
 *@value: the value
 *Return: 1 if it is successful, 0 if it is not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_pair, *current;
	char *key_copy, *value_copy;
	unsigned long int row_number;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	new_pair = malloc(sizeof(hash_node_t));
	if (new_pair == NULL)
		return (0);
	new_pair->key = key_copy;
	new_pair->value = value_copy;
	new_pair->next = NULL;
	/*assign the index to the row_number of the table*/
	row_number = key_index((const unsigned char *)key, ht->size);
	if (ht->array[row_number] == NULL)/*if it is empty insert directly*/
	{
		ht->array[row_number] = new_pair;
		return (1);
	}
	else/*if not empty either it is to update or link to the same row*/
	{
		current = ht->array[row_number];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{/*key already exist, update value*/
				free(current->value);
				current->value = value_copy;
				return (1);
			}
			current = current->next;
		} /*if no key is a match then link the row with the new_pair*/
		new_pair->next = ht->array[row_number];
		ht->array[row_number] = new_pair;
		return (1);
	}
}
