#include "lists.h"
/**
 *add_node_end - function to addnode to the tail
 *@head:current head of the linked list
 *@str: string
 *Return: address to new pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	list_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		return (new);
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
