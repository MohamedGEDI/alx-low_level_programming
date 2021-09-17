#include "lists.h"
/**
 * get_dnodeint_at_index - get node at
 * @head: linked list
 * @index: get node at index
 * Return: node atindex
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *count = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (count != NULL)
	{
		if (i == index)
		{
			return (count);
		}
		count = count->next;
		i++;
	}
	return (NULL);
}
