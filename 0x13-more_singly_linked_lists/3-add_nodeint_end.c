#include "lists.h"
/**
 *add_nodeint_end - function to addnode to the end
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
