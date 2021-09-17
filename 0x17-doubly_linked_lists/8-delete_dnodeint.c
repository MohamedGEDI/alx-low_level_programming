#include "lists.h"
/**
 * delete_dnodeint_at_index - delete at index
 * @head: linked list
 * @index: location
 * Return: 1 0n success -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *count = *head;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(count);
		return (1);
	}
	while (i < index)
	{
		if (count == NULL)
		{
			return (-1);
		}
		count = count->next;
		i++;
	}

	count->next->prev = count->next;
	if (count->next != NULL)
		count->next->prev = count->prev;
	free(count);
	return (1);
}
