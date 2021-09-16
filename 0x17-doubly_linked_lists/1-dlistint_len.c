#include "lists.h"
/**
 * dlistint_len - length of list
 * @h: beginning of list
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
	{
		return (NULL);
	else
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
