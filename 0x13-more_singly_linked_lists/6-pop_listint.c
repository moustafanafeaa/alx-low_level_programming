#include <lists.h>
/**
 * pop_listint - remove head of node 
 * @head: pointer of first node
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
