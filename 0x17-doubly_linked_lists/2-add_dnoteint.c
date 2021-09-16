#include "lists.h"
/**
 *add_dnodeint - function to addnode to the head
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	if (*head != NULL)
		return (new);
	else
		return (NULL);
}
