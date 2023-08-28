#include "lists.h"
/**
 * free_listint - remove all nodes
 * @head: pointer to 1st node
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
