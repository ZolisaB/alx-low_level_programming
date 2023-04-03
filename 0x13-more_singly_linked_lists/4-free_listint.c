#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head:pointer to the head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
