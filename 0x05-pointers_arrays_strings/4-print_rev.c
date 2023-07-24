#include "main.h"

/**
 * print_rev -  returns the length of a string.
 *
 * @s: input pointer to a
 *
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
