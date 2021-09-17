#include "lists.h"
/**
 * sum_dlistint - sum of data in linked list
 * @head: linked list
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	dlistint_t *count = head;
	int sum = 0;

	while (count != NULL)
	{
		sum += count->n;
		count = count->next;
	}
	return (sum);
}
