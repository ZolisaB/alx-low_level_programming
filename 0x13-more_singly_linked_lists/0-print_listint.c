#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_list.
 * @h: pointer to the head of a list.
 *
 * Return: numbers of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
