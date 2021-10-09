#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "Mohamed", "Gedis son");
	hash_table_set(ht, "Whatsapp", "Facebook");
	hash_table_set(ht, "Youtube", "google");
	hash_table_print(ht);
	return (0);
}
