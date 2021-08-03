#include "lists.h"
/**
 * get_nodeint_at_index - gets the int value of node at index
 * @head: linked list 
 * @index: index 
 * Return: value int
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return (NULL);
	while (index > 0)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index--;
       	}
	return (temp);
}
