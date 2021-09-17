#include "lists.h"
/**
 * insert_dnodeint_at_index - insert  at index
 * @h:linked list
 * @idx: index to insert
 * @n: data
 * Return: updated list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *count = *h;
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		if (count == NULL)
			return (NULL);
		i++;
		count = count->next;
	}

	if (count->next == NULL)
		return (add_dnodeint_end(h, n));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = count->next;
	count->next->prev = new;
	count->next = new;
	new->prev = count;

	return (new);
}
