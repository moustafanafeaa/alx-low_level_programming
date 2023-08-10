#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: int start
 * @max: int end
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);


	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (0);

	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
