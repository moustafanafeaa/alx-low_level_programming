#include "lists.h"
/**
 * add_nodeint - add node in top
 * @head: pointer to 1st node
 * @n: value in new node
 * Return: ptr to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
