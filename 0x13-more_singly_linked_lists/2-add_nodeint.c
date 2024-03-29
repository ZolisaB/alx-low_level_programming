#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked listint_t list
 * @head:pointer to the head of a list.
 * @n: n element.
 *
 * Return: address of the new element OR NUll if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
