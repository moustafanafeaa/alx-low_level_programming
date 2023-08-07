#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size:size of int
 * @c: char
 * Return: return pointer
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size * sizeof(char));

	if (n == NULL || size == 0)
		return (0);
	while (size--)
		n[size] = c;
	return(n);

}
