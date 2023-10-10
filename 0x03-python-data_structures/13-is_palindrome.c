#include "lists.h"

/**
 * reverse_listint - Reverses a singly-linked list of integers.
 * @head: A pointer to the starting node of the list to be reversed.
 *
 * This function reverses the order of nodes in a singly-linked list
 * and returns a pointer to the head of the reversed list.
 *
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next_node, *prev_node = NULL;

	while (current)
	{
		next_node = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next_node;
	}

	*head = prev_node;
	return (*head);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * This function determines whether the linked list is a palindrome,
 * i.e., reads the same forwards and backward.
 *
 * Return: If the linked list is not a palindrome - 0.
 *         If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *current, *reversed, *middle;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	current = *head;
	while (current)
	{
		size++;
		current = current->next;
	}

	current = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		current = current->next;

	if ((size % 2) == 0 && current->n != current->next->n)
		return (0);

	current = current->next->next;
	reversed = reverse_listint(&current);
	middle = reversed;

	current = *head;
	while (reversed)
	{
		if (current->n != reversed->n)
			return (0);
		current = current->next;
		reversed = reversed->next;
	}
	reverse_listint(&middle);

	return (1);
}

