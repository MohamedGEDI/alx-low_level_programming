#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "Mohamed", "Gedis son");
	hash_table_set(ht, "Whatsapp", "Facebook");
	hash_table_set(ht, "Youtube", "google");

	value = hash_table_get(ht, "Whatsapp");
	printf("%s\n",value);
	value = hash_table_get(ht, "Mohamed");
	printf("%s\n",value);
	value = hash_table_get(ht, "Youtube");
	printf("%s\n",value);
	return (0);
}
