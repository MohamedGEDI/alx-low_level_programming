#include "lists.h"
/**
 *add_dnodeint_end - function to addnode to the head
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{

		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;

	new->next = NULL;
	new->prev = current;
	current->next = new;
	return (new);
}
