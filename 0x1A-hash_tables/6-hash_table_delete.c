#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (!ht)
		return;
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			tmp = ht->array[index]->next;
			free(ht->array[index]);
			ht->array[index] = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
