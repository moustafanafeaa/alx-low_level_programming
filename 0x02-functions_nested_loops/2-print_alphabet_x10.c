#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in 10 lines from a - z
 */
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
}
