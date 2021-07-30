#include "lists.h"
#include <string.h>
/**
 *add_node_end - function to addnode to the tail
 *@head:current head of the linked list
 *@str: string
 *Return: address to new pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	
	list_t *new = (list_t *)malloc(sizeof(list_t));

	list_t *last;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		return (new);

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
