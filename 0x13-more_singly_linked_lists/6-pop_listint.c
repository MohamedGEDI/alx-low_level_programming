#include "lists.h"
/**
 *pop_listint - remove the head node
 *@head: linked list
 *Return: data of deleted node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
