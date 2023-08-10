#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - function that creates an array of integers
 * @ptr: pointer to memory 
 * @old_size: alocate speace for ptr
 * @new_size: new size in byte
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size = new_size;
	char *pointer;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL):
	}
	else if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);

	if (new_size > old_size)
		size = old_size;
	for (i = 0; i < n; i++)
		pointer[i] = oldptr[i];
	free(ptr);
	return (pointer);
}

