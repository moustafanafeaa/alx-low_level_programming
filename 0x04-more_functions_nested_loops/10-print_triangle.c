#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 *
 * @size:  is the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

if (size > 0)
{
	for (i = 0; i <= size; i++)
	{
		for (j = i; j <= size; j++)
		{
			if ((i * j) <= size)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
else
	_putchar('\n');
}
