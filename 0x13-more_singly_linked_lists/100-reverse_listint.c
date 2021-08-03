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

	if (head == NULL)
		return (*head);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	(*head) = prev;
	return (*head);
}
