#include "hash_tables.h"
/**
 *key_index -  a function that gives you the index of a key
 *@key: is the key
 *@size: is the size of the array
 *Return: the index at which the key/value pair is stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
