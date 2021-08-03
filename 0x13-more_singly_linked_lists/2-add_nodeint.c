#include "lists.h"
/**
 *add_nodeint - function to addnode to the head
 *@head:current head of the linked list
 *@n: int
 *Return: address to new pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

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
