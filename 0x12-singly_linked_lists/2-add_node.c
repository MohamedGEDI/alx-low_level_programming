#include "lists.h"
/**
 *add_node - function to addnode to the head
 *@head:current head of the linked list 
 *@str: string 
 *Return: address to new pointer 
*/
list_t *add_node(list_t **head, const char *str)
{
		
	list_t *new = (list_t *)malloc(sizeof(list_t));
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;
	if (*head != NULL)
		return (*head);
	else 
		return (NULL);
}
