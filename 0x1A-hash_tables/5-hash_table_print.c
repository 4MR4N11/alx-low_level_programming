#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long index = 0;
	hash_node_t *tmp;
	int check = 0; /*to check when should print the ", "*/

	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (check)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			check = 1;
		}
		index++;
	}
	printf("}\n");
}
