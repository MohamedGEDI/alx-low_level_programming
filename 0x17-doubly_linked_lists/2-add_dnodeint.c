#include "lists.h"
/**
 *add_dnodeint - function to addnode to the head
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->next = (*head);
	new->prev = NULL;
	(*head)->prev = new;
	(*head) = new;
	return (new);
}
