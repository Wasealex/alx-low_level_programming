#include "hash_tables.h"
/**
 *hash_table_create - function that creates a table based on size
 *@size: number of rows of the table
 *Return: the hash table if done successfull
 *null if a table can not be created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
