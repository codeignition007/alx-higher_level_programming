#include "lists.h"

/**
 * check_cycle - Check if a linked list contains a cycle using Floyd's Tortoise and Hare algorithm
 * @list: Pointer to the head of the linked list
 *
 * Return: 1 if the list contains a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1); // Cycle detected
	}

	return (0); // No cycle found
}

