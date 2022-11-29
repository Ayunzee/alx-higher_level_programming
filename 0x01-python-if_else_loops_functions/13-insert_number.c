#include "lists.h"

/**
 * insert_node - inseerts a number into a sorted singly-linked list.
 * @head: a pointer to the linked list
 * @number: the number to insert
 * Return: if the function fails - NULL
 * 		otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_int *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
