#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Structure for a singly linked list node
 * @n: Integer data stored in the node
 * @next: Pointer to the next node in the list
 *
 * Description: Definition for a node in a singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Print all elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: Pointer to the address of the head node
 * @n: Integer to be stored in the new node
 *
 * Return: Address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Free a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Check if a loop exists in a linked list (Floyd's Tortoise and Hare)
 * @list: Pointer to the head of the list
 *
 * Return: 1 if a loop exists, 0 otherwise
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */

