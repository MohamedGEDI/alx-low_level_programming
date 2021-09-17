#include "lists.h"
/**
 * free_dlistint - free soubly linked list
 * @head: linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *clear = head;

	if (head->next == NULL)
		free(head);
	while (head->next != NULL)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
	free(head);
}
