#include <stdio.h>
#include "main.h"

/**
 * _puts -  returns the length of a string.
 *
 * @str: input pointer to a
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}	
	printf("\n");
}
