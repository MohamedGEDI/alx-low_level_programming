#include "lists.h"
/**
 * sum_listint - sums data of nodes
 * @head: linked list
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
