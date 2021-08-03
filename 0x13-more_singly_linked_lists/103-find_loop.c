#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: linl list
 * Return: address of loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = slow = head;

	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (fast);
	}
	return (NULL);
}
