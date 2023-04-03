#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked listint_t list
 * @head: poiter to the head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If the node does not exist, then returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
