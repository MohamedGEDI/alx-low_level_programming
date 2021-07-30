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
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;

	}
	return (i);
}
