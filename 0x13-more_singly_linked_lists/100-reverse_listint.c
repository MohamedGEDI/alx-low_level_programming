#include "lists.h"
/**
 * reverse_listint -reverse linked list
 * @head: pointer to linked list
 * Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL;
	listint_t *prev = NULL;
	
	if (*head == NULL)
		return (*head);

	next = current->next;
	current->next = NULL;

	while (*head != NULL)
	{
		prev = next->next;
		next->next = current;
		current = next;
		next = prev;
	}
	(*head) = current;
	return (*head);
}
