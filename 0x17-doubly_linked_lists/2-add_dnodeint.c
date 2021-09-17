#include "lists.h"
/**
 *add_dnodeint - function to addnode to the head
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;
	if (*head != NULL)
		(*head)->prev = new;
	return new;
}
