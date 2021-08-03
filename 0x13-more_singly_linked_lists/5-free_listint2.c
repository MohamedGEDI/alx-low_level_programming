#include "lists.h"
/**
 * free_listint2 - free list and set head to null
 * @head: pointer to a pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (current == NULL)
		*head = NULL
	else
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		current = NULL;
	}
}
