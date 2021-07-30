#include "lists.h"
/**
 * free_list - deletes singly inked list
 * @head: pointer to the first data
*/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
