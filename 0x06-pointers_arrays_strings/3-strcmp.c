#include "main.h"
#include <stdio.h>

/**
 * _strcmp - that compare two strings.
 *
 * @s1: destination parameter to func
 * @s2: destination parameter to func
 *
 * Return: pointer dest
 */
char _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
