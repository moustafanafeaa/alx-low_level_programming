#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: pointer of first node
 * Return: pointer to node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
