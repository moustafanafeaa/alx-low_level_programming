#include "lists.h"
/**
 * free_listint2 - remove all nodes
 * @head: pointer to 1st node
 */
void free_listint(listint_t **head)
{
	listint_t *nodeو *temp;

	if (head == NULL)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
