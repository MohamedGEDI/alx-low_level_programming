#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints list in a singly linked list
 * @h: nodes
 * Return: number of nodes 
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("%s", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
