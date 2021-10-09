#include "hash_tables.h"

int main(void)
{
	char *s;

	unsigned long int table_size;

	table_size = 1024;
	s = "cisfun";
	printf("%lu\n", key_index((unsigned char *) s, table_size));
	return (0);
}
