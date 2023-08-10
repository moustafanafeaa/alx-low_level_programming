#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @size: unsigned int size of arr.
 * @nmemb: unsinged arr
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(sizeof(unsigned int) * nmemb);
	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = 0;
	}
return (p);
}
