#include "lists.h"
/**
 * add_nodeint_end - add node in end
 * @head: pointer to 1st node
 * @n: value in new node
 * Return: ptr to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (head == NULL || new_node == NULL)
		return (0);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
