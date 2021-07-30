#include "lists.h"
/**
 * free_list - deletes singly inked list
 * @head: pointer to the first data
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
