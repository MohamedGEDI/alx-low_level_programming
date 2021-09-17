#include "lists.h"
/**
 * free_dlistint - free soubly linked list
 * @head: linked list
*/
void free_dlistint(dlistint *head)
{
	dlistint *clear = head;

	if (head->next == NULL)
		free(head);
	while (head->next != NULL)
	{
		clear = head;
		head = head->next
		free(clear);
	}
}
