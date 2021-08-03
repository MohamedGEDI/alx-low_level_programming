#include "lists.h"
/**
 *free_listint - deletes a linked list
 *@head: head of the list
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
