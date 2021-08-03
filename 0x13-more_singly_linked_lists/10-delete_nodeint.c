#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: list
 * @index: index
 * Return: 1 0r -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		(*head) = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
